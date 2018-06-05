#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


#include <stdio.h>
#include <stdlib.h>
#include"string.h"
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
   int retorno=1;
   if(pEmployeeA!=NULL && pEmployeeA!=NULL)
   {
    if(strcmp(employee_getName(pEmployeeA),employee_getName(pEmployeeB)))
   {
       retorno=0;
   }
   }else
   {
        printf("NULL");
   }
    return retorno;
}

int employee_compareByName(void* pEmployeeA,void* pEmployeeB)
{
    int retorno=0;
    Employee* e1= pEmployeeA;
    Employee* e2= pEmployeeB;

    return strcmp(e1->name,e2->name);
}

int employee_compareById(void* pEmployeeA,void* pEmployeeB)
{
    int retorno=0;
    Employee* e1= pEmployeeA;
    Employee* e2= pEmployeeB;

    if (e1->id==e2->id)
    {
      retorno=0;
    }
    else{
        if(e1->id>e2->id)
        {
            retorno=1;
        }
    }

    return retorno;
}


void employee_print(Employee* this)
{

 printf("\n%d\t %s\t       %s", this->id, this->name, this->lastName);

}


void employees_print_all(ArrayList* pArrayListEmployee)
{
  Employee* aux;
  int len;
  len=al_len(pArrayListEmployee);

  for (int i=0; i<len; i++)
  {
    if (i % 50 == 0)
        {
            printf("\n");
            system("pause");
        }
    aux = (Employee*)al_get(pArrayListEmployee, i);
    employee_print(aux);
  }
}


void employees_sort(ArrayList* pArrayListEmployee, int orden)
{

  al_sort(pArrayListEmployee,employee_compare,orden);

}


Employee* employee_new(void)
{

    Employee* returnAux = (Employee*)malloc(sizeof(Employee));

    return returnAux;

}

void employee_delete(Employee* this)
{
    this->isEmpty=0;
}

int employee_setId(Employee* this, int id)
{
    int aux = 0;
    if(this!=NULL)
    {
        this->id = 0;
        aux = 1;
    }

    return aux;
}



int employee_getId(Employee* this)
{

    return 0;

}

char* employee_getName(Employee* this)
{

    char* texto;

    texto = (char*) malloc(sizeof(char));


    if(this!=NULL)
    {
        strcpy(this->name,texto);

    }

    return texto;
}

#include <stdio.h>
#include <stdlib.h>
#include"string.h"
#include "ArrayList.h"
#include "Employee.h"
#include "input.h"


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

void employees_add(ArrayList* pArrayListEmployee)
{

 Employee* NuevoEmpleado = employee_new();

 if(NuevoEmpleado !=NULL)
 {
     getStringletras("Ingresar Nombre: ",NuevoEmpleado->name, 1, 25);
     getStringletras("Ingresar Apellido: ",NuevoEmpleado->lastName, 1, 25);
     NuevoEmpleado->isEmpty=1;
     NuevoEmpleado->id=pArrayListEmployee->size;

     al_add(pArrayListEmployee,NuevoEmpleado);

 }

}

Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    returnAux =(Employee*)malloc(sizeof(Employee));

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    int id;

    id = (int) malloc(sizeof(int));

    if(this!=NULL)
    {
        id=this->id;
    }

    return id;
}

char* employee_getName(Employee* this)
{

    char* texto;

    texto = (char*)malloc(sizeof(char)*50);


    if(this!=NULL)
    {
        strcpy(texto,this->name);

    }

    return texto;
}

int employee_SetName(Employee* this, char* texto)
{
    int retorno =0;
    if(this!=NULL)
    {
        strcpy(this->name,texto);
        retorno =1;

    }

    return retorno;
}


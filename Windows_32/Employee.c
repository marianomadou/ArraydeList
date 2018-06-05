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
    int retorno=0;
    if (strcmp(((Employee*)pEmployeeA)->name,((Employee*)pEmployeeB)->name))
    {
      retorno=1;
    }

    return retorno;
}

int employee_compare2(void* pEmployeeA,void* pEmployeeB)
{
    int retorno=0;
    Employee* aux1= pEmployeeA;
    Employee* aux2= pEmployeeB;


    if (strcmp(aux1->name,aux2->name))
    {
      retorno=1;
    }

    return retorno;
}



void employee_print(Employee* this)
{

 printf("\n%d\t %s\t %s", this->id, this->name, this->lastName);

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

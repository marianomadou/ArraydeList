#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{

    ArrayList* empleados;

    Employee* aux;

    empleados=al_newArrayList();

    Employee* e;
    e=(Employee*) malloc(sizeof(Employee));
    e->id=5;
    strcpy(e->name, "Juan");
    al_add(empleados, e);

    Employee* e2;

    e2=(Employee*) malloc(sizeof(Employee));
    e2->id=6;
    strcpy(e2->name, "Luis");
    al_add(empleados, e2);


    printf("hay %d elementos\n\n", al_len(empleados));

    for (int i=0; i<al_len(empleados);i++)
    {
        aux= (Employee*)al_get(empleados,i);
        printf("%d -- %s\n", aux->id, aux->name);
    }

    getche();

    al_push(empleados, 1, e);

    /*al_clear(empleados);*/


     printf("hay %d elementos\n\n", al_len(empleados));

    for (int i=0; i<al_len(empleados);i++)
    {
        aux= (Employee*)al_get(empleados,i);
        printf("%d -- %s\n", aux->id, aux->name);
    }


    return 0;
}

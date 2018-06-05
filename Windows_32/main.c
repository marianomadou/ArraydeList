#include <stdio.h>
#include <stdlib.h>
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

    ArrayList* listaEmpleados;
    FILE *f_empleados;
    Employee *aux;

    int len;
    int i;

     //CREO ARRAY LIST
    listaEmpleados=al_newArrayList(); // llamo al constructor;
    //COPIA DE ARCHIVO
    parserEmployee(f_empleados, listaEmpleados);

    len =al_len(listaEmpleados) ;//LO GENERO UNA SOLA VEZ

    printf("elementos: %d", len);

    for (i=0; i<len; i++ )
    {
         aux=(Employee*)al_get(listaEmpleados,i); //casteo a una estructura  COPIO LA DIRECCION DE MEMORIA DE LA INFO QUE QUIERO
         printf("\n-%d-----%s, %s", aux->id, aux->lastName, aux->name);
    }

    printf("\n ORDENA");

    al_sort(listaEmpleados,employee_compare,1);//COMPARA Y ORDENA

//puntero a funcion (*PFUNC)
//**IMPORTANTE* VALOR DE RETORNO Y CANTIDAD DE TIPOS DE DATO

     for (i=0; i<len; i++ )
    {
         aux=(Employee*)al_get(listaEmpleados,i); //casteo a una estructura  COPIO LA DIRECCION DE MEMORIA DE LA INFO QUE QUIERO
         printf("\n-%d-----%s, %s", aux->id, aux->lastName, aux->name);
    }

    printf("\n");
    printf("\n");


  //  printf("\n AGREGAR UN EMPLEADO");

  // al_add(listaEmpleados,(Employee*)employee_new());


    return 0;
}
/*
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


     /*printf("hay %d elementos\n\n", al_len(empleados));

    for (int i=0; i<al_len(empleados);i++)
    {
        aux= (Employee*)al_get(empleados,i);
        printf("%d -- %s\n", aux->id, aux->name);
    }


    return 0;
}
*/

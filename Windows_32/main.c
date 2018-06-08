#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "ArrayList.h"
#include "Employee.h"
#include "input.h"

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


    empleados= al_newArrayList();
    ArrayList* subempleados;
    subempleados= al_newArrayList();



     char seguir='s';
     int opcion;


    while(seguir=='s')
    {
        printf("1. Parse del archivo data.csv\n");
        printf("2. Listar Empleados\n");
        printf("3. Ordenar por nombre\n");
        printf("4. Agregar un elemento\n");
        printf("5. Elimina un elemento\n");
        printf("6. Listar Empleados (Desde/Hasta)\n");
        printf("7. Salir\n");

        opcion = IngresarEntero("\nIngrese una OPCION\n", 1, 5);

        switch(opcion)
        {
            case 1:
                parserEmployee("data.csv",empleados);
                break;
            case 2:
                employees_print_all(empleados);
                break;
            case 3:
                al_sort(empleados,employee_compareByName,1);//ordena por Nombre
               break;
            case 4:
                employees_add(empleados);
                break;
            case 5:
               break;
            case 6:
                break;
            case 7:
                seguir = 'n';
                break;
        }
}


    /*ArrayList* empleados;
    Employee* aux;
    empleados=al_newArrayList();

    int id;
    char nombre[50];
    int len;
    int j;

    Employee* e;
    e=(Employee*) malloc(sizeof(Employee));
    e->id=5;
    strcpy(e->name, "Juan");
    strcpy(e->lastName, "Cantaro");
    al_add(empleados, e);

    Employee* e2;
    e2=(Employee*) malloc(sizeof(Employee));
    e2->id=6;
    strcpy(e2->name, "Luis");
    strcpy(e2->lastName, "Rodriguez");
    al_add(empleados, e2);


    Employee* e3;
    e3=(Employee*) malloc(sizeof(Employee));
    e3->id=8;
    strcpy(e3->name, "Adelfa");
    strcpy(e3->lastName, "Gonzalez");
//fin empleados hardcore


    parserEmployee("data2.csv",empleados);//parsear empleados

    getche();

    printf("hay %d elementos\n\n", al_len(empleados));//mostrar empleados
    employees_print_all(empleados);
    printf("\n-------------------------------\n");

    getche();
    al_push(empleados, 0, e3);//hago push en la posicion 1 del empleado e3
    printf("hay %d elementos\n\n", al_len(empleados));
    employees_print_all(empleados);
    printf("\n-------------------------------\n");


    getche();
    al_sort(empleados,employee_compareById,1);//ordena por Id
    printf("hay %d elementos ORDENADOS POR ID\n\n", al_len(empleados));
    employees_print_all(empleados);
    printf("\n-------------------------------\n");


    getche();
    al_sort(empleados,employee_compareByName,1);//ordena por Nombre
    printf("hay %d elementos ORDENADOS POR NOMBRE\n\n", al_len(empleados));
    employees_print_all(empleados);
    printf("\n-------------------------------\n");

    getche();
    al_remove(empleados, 0);//borra un elemento de la lista
    printf("hay %d elementos, DESPUES DE BORRAR 1 ELEMENTO\n\n", al_len(empleados));

    employees_print_all(empleados);
    printf("\n-------------------------------\n");


    getche();
    al_clear(empleados);//borra TODOS LOS EMPLEADOS DEL ARRAYLIST
    printf("hay %d elementos DESPUES DE BORRAR TODOS\n\n", al_len(empleados));

    for (int i=0; i<al_len(empleados);i++)
    {
        aux= (Employee*)al_get(empleados,i);
        printf("%d -- %s\n", aux->id, aux->name);
    }
    printf("\n-------------------------------\n");*/


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#include "Dato.h"

//GETer=obtiene un valor y SETer=Escribe un valor


eDato* pedirMemoria();
eDato* Memoria_parametros(int, char*);


int main()
{
    //eDato dato;
    eDato* d=NULL;
    eDato* e;

    //d=&dato;
//    d=(eDato*) malloc(sizeof(eDato));

    d=pedirMemoria();

    if(d!=NULL)
    {

    eDato_set_a(d,1661);//practicar validaciones

    eDato_set_b(d,"Peter");

    printf("%d -- %s", eDato_get_a(d),eDato_get_b(d));

    }

    e=Memoria_parametros(15000, "Luis");

    if(d!=NULL)
        {
           printf("%d -- %s", eDato_get_a(e),eDato_get_b(e));
        }
    return 0;
}

eDato* pedirMemoria()
{
eDato* retorn;

if (retorn!=NULL)
    {
     retorn=(eDato*)malloc(sizeof(eDato));
        }else
        {
         printf("No hay suficiente memoria libre ");
         retorn=NULL;
        }
return retorn;
}

eDato* Memoria_parametros(int a, char* b)
{
    eDato* retorno;
    retorno=pedirMemoria();

    if (retorno!=NULL)
    {
     eDato_set_a(retorno,a);
     eDato_set_b(retorno,b);
    }
return retorno;
}

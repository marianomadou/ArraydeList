#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Dato.h"

int eDato_set_a(eDato* this, int valor)
{
    int ret = 0;
    if(this!=NULL && valor>1500)
    {
        this->a = valor;
        ret = 1;
    }
    return ret;//si puede asignarlo retorna 1, sino 0
}

int eDato_set_b(eDato* dato, char* valor)
{
    int ret = 0;
    if(dato!=NULL && valor!=NULL)
    {
        strcpy(dato->b , valor);
        ret = 1;
    }
    return ret;
}

int eDato_get_a(eDato* dato)
{
    int valor = -1;
    if(dato!=NULL)
    {
        valor = dato->a;
    }
    return valor;
}

char* eDato_get_b(eDato* dato)
{
    char* valor;
    if(dato!=NULL)
    {
       valor=dato->b;
    }
    return valor;
}




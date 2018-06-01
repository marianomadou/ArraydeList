/*
    utest example : Unit test examples.
    Copyright (C) <2016>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __ARRAYLIST
#define __ARRAYLIST
struct ArrayList{
    int size;
    void **pElements;
    int reservedSize;

    int     (*add)();
    int     (*len)();
    int     (*contains)();
    int     (*set)();
    int     (*remove)();
    int     (*clear)();
    int     (*push)();
    int     (*indexOf)();
    int     (*isEmpty)();
    void*   (*get)();
    void*   (*pop)();
    int     (*containsAll)();
    int     (*sort)();
    struct ArrayList* (* clone)();
    struct ArrayList* (*subList)();
    int     (*deleteArrayList)();

}typedef ArrayList;
#endif


/** \brief Asigna un nuevo arrayList con elementos AL_INITIAL_VALUE.
  * \param void
  * \return ArrayList * Return (NULL) si Error [si no puede asignar memoria]
  * - (puntero a la nueva lista de arreglos) si está bien
  */
ArrayList* al_newArrayList(void);


/** \brief Agrega un elemento a arrayList y si es
  * nessesary cambia el tamaño de la matriz
  * \param pList ArrayList * Puntero a arrayList
  * \param pElement void * Puntero al elemento
  * \return int Return (-1) si Error [pList o pElement son puntero NULL] - (0) si Ok
  *
  */
int al_add(ArrayList* pList,void* pElement);


/** \brief Agregar a arrayList
  * \param pList ArrayList * Puntero a arrayList
  * \return int Return (-1) si Error [pList es puntero NULL] - (0) si Ok
  *
  */
int al_deleteArrayList(ArrayList* pList);


/** \brief Eliminar arrayList
  * \param pList ArrayList * Puntero a arrayList
  * \return int Devuelve la longitud de la matriz o (-1) si Error [pList es un puntero NULL]
  *
  */
int al_len(ArrayList* pList);


/** \brief Obtiene un elemento por índice
  * \param pList ArrayList * Puntero a arrayList
  * \param index int Índice del elemento
  * \return void * Return (NULL) si Error [pList es puntero NULL o índice no válido] - (Puntero al elemento) si Ok
  *
  */
void* al_get(ArrayList* pList , int index);


/** \brief Encontrar si pList contiene al menos un elemento pElement
  * \param pList ArrayList * Puntero a arrayList
  * \param pElement void * Puntero al elemento
  * \return int Retorno (-1) si Error [pList o pElement son puntero NULL]
  * - (0) si está bien pero no encontró un elemento
  * - (1) si esta lista contiene al menos un elemento pElement
  *
  */
int al_contains(ArrayList* pList, void* pElement);


/** \brief Establece un elemento en pList en la posición de índice
  * \param pList ArrayList * Puntero a arrayList
  * \param index int Índice del elemento
  * \param pElement void * Puntero al elemento
  * \return int Retorno (-1) si Error [pList o pElement son puntero NULL o índice no válido]
  * - (0) si está bien
  *
  */
int al_set(ArrayList* pList, int index,void* pElement);


/** \brief Eliminar un elemento por índice
  * \param pList ArrayList * Puntero a arrayList
  * \param index int Índice del elemento
  * \return int Retorno (-1) si Error [pList es puntero NULL o índice no válido]
  * - (0) si está bien
  */
int al_remove(ArrayList* pList,int index);



/** \brief Elimina todos los elementos de esta lista
  * \param pList ArrayList * Puntero a arrayList
  * \return int Retorno (-1) si Error [pList es puntero NULL]
  * - (0) si está bien
  */
int al_clear(ArrayList* pList);


/** \brief Devuelve una matriz que contiene todos los elementos de esta lista en la secuencia correcta
  * \param pList ArrayList * Puntero a arrayList
  * \return ArrayList * Return (NULL) si Error [pList es puntero NULL]
  * - (Nueva matriz) si está bien
  */
ArrayList* al_clone(ArrayList* pList);


/** \brief Inserta el elemento en la posición especificada
  * \param pList ArrayList * Puntero a arrayList
  * \param index int Índice del elemento
  * \param pElement void * Puntero al elemento
  * \return int Retorno (-1) si Error [pList o pElement son puntero NULL o índice no válido]
  * - (0) si está bien
  */
int al_push(ArrayList* pList, int index, void* pElement);



/** \brief Devuelve el índice de la primera aparición del elemento especificado
  * \param pList ArrayList * Puntero a arrayList
  * \param pElement void * Puntero al elemento
  * \return int Return (-1) si el error [pList o pElement son puntero NULL] - (index to element) if Ok
  */
int al_indexOf(ArrayList* pList, void* pElement);



/** \brief Devuelve true si esta lista no contiene elementos.
  * \param pList ArrayList * Puntero a arrayList
  * \return int Retorno (-1) si Error [pList es puntero NULL] - (0) si no está vacío - (1) si está vacío
  */
int al_isEmpty(ArrayList* pList);



/** \brief Retire el artículo en la posición indicada en la lista y devuélvalo.
  * \param pList ArrayList * Puntero a arrayList
  * \param index int Índice del elemento
  * \return int Retorno (NULL) si Error [pList es puntero NULL o índice no válido]
  * - (puntero del elemento) si está bien
  */
void* al_pop(ArrayList* pList,int index);



/** \brief Devuelve una nueva lista de arreglos con una parte de pList entre los especificados
  * fromIndex, inclusive y toIndex, exclusivo.
  * \param pList ArrayList * Puntero a arrayList
  * \param desde int Índice inicial del elemento (inclusive)
  * \param to int Índice final del elemento (exclusivo)
  * \return int Return (NULL) si Error [pList es puntero NULL o inválido 'de' o inválido 'a']
  * - (apunta a la nueva matriz) si está bien
  */
ArrayList* al_subList(ArrayList* pList,int from,int to);



/** \brief Devuelve true si la lista pList contiene todos los elementos de pList2
  * \param pList ArrayList * Puntero a arrayList
  * \param pList2 ArrayList * Puntero a arrayList
  * \return int Retorno (-1) si Error [pList o pList2 son puntero NULL]
  * - (0) si no contiene todo - (1) si contiene todo
  */
int al_containsAll(ArrayList* pList,ArrayList* pList2);


/** \brief Ordena los objetos de la lista, use compare pFunc
  * \param pList ArrayList * Puntero a arrayList
  * \param pFunc (* pFunc) Puntero a funcion para comparar elementos de arrayList
  * \param order int [1] indicar UP - [0] indicar DOWN
  * \return int Return (-1) si Error [pList o pFunc son puntero NULL]
  * - (0) si está bien
  */
int al_sort(ArrayList* pList, int (*pFunc)(void* ,void*), int order);



/** \brief Incrementa la cantidad de elementos en pList en los elementos AL_INCREMENT.
  * \param pList ArrayList * Puntero a arrayList
  * \return int Retorno (-1) si Error [pList es puntero NULL o no puede asignar memoria]
  * - (0) si está bien
  */
int resizeUp(ArrayList* pList);


/** \brief Expandir una lista de arreglos
  * \param pList ArrayList * Puntero a arrayList
  * \param index int Índice del elemento
  * \return int Retorno (-1) si Error [pList es puntero NULL o índice no válido]
  * - (0) si está bien
  */
int expand(ArrayList* pList,int index);


/** \brief Contrate una lista de arreglos
  * \param pList ArrayList * Puntero a arrayList
  * \param index int Índice del elemento
  * \return int Retorno (-1) si Error [pList es puntero NULL o índice no válido]
  * - (0) si está bien
  */
int contract(ArrayList* pList,int index);


// Private function
int resizeUp(ArrayList* pList);
int expand(ArrayList* pList,int index);
int contract(ArrayList* pList,int index);
//___________________

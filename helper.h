//
// Created by mauri on 01/09/22.
//

#ifndef INTERSECCION_2LISTASORDENADAS_HELPER_H
#define INTERSECCION_2LISTASORDENADAS_HELPER_H

typedef struct nodo{

    int cod;
    struct nodo * sig;

}nodo;

typedef struct lista{

    int cant;
    nodo * pri;

}lista;

nodo * newnodo(int);

lista * newlist();


void apilar (lista *, nodo *);

lista * interseccion(lista*,lista*);


void imprimir(lista*);


#endif //INTERSECCION_2LISTASORDENADAS_HELPER_H

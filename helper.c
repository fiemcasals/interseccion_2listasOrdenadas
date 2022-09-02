//
// Created by mauri on 01/09/22.
//

#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include "helper.h"


nodo * newnodo(int cod){

    nodo * nuevo= (nodo *) malloc(sizeof (nodo));

    if(nuevo==NULL){
        printf("\nNo posee memoria suficiente, para crear un nuevo nodo\n");
        exit(-1);
    }

    nuevo->cod=cod;
    nuevo->sig=NULL;

    return nuevo;
}

lista * newlist(){

    lista * nueva = (lista *) malloc(sizeof (lista));

    if(nueva==NULL){
        printf("\nNo se ha podido asignar memoria a la nueva lista\n");
        exit(-1);
    }

    nueva->pri=NULL;
    nueva->cant=0;

    return nueva;
}

void apilar (lista * listaTrabajo, nodo * nodoActual){

    nodo * auxiliar = listaTrabajo->pri;

    if(auxiliar==NULL){
        listaTrabajo->pri=nodoActual;
        listaTrabajo->cant++;
        return;
    }

    nodoActual->sig=auxiliar;
    listaTrabajo->pri=nodoActual;
    listaTrabajo->cant++;

}

lista *interseccion(lista * lista1, lista *lista2) {

    lista * lista3=newlist();

    nodo * aux1=lista1->pri;
    nodo * aux2=lista2->pri;

    while(aux1!=NULL && aux2!=NULL){

        if(aux1->cod==aux2->cod){
            apilar(lista3, newnodo(aux2->cod));
            aux2=aux2->sig;
            aux1=aux1->sig;
        }else{
            if(aux2->cod<aux1->cod){
                aux2=aux2->sig;
            }else{
                aux1=aux1->sig;
            }
        }


    }
    return lista3;
}


void imprimir(lista * listaTrabajo) {

    nodo * aux= listaTrabajo->pri;

    if(aux==NULL){
        printf("la lista esta vacia\n");
    }

    for(;aux!=NULL;aux=aux->sig){

        printf("el codigo es: %d\n", aux->cod);

    }
}
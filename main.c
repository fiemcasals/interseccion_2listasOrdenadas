
#include "helper.h"

int main() {

    lista * lista1=newlist();

    apilar(lista1, newnodo(6));
    apilar(lista1, newnodo(4));
    apilar(lista1, newnodo(2));
    apilar(lista1, newnodo(1));

    lista * lista2=newlist();

    apilar(lista2, newnodo(5));
    apilar(lista2, newnodo(4));
    apilar(lista2, newnodo(3));
    apilar(lista2, newnodo(2));

    imprimir(interseccion(lista1,lista2));

    return 0;
}

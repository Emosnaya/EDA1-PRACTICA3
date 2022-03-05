#ifndef __NATURAL_H__
#define __NATURAL_H__
#include <stdbool.h>

struct _natural //SE define la estructura del numero natural
{
    int valor;
};

typedef struct _natural natural; //Se define el tipo

//Se declaran las funciones
natural cero();
bool Escero(natural n);
bool Igual(natural n, int m);
int sucesor(natural n);
int predecesor(natural n);
bool menor(natural n, int);
int suma(natural n, int);
int diferencia(natural n, int);



#endif

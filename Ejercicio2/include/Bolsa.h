#ifndef __BOLSA_H__
#define __BOLSA_H__
#include <stdbool.h>
#define MAX 200
#define MAX2 100

struct _Bolsa
{
    char elem[MAX][MAX2];
    int len;
};

typedef struct _Bolsa Bolsa;

Bolsa crear_bolsa();
Bolsa agregar(Bolsa *s, char[]);
bool es_vacia(Bolsa s);
bool dentro(Bolsa s, char []);
int cuantos(Bolsa s, char[]);
Bolsa unir(Bolsa *s, Bolsa c);
int total(Bolsa s);

#endif















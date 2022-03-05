#include "Natural.h"
#include <string.h>
#include <stdio.h>

natural cero() //funcion que genera un natrual cero
{
    natural n;
    n.valor = 0;
    return n;
}

bool Escero(natural n) //funcion que regresa si el número ingresado es 0 o no
{

    if (n.valor == 0) return true;

    return false;
}

int sucesor(natural n)
{
    //regresa el valor sigueinte del natural
    return n.valor+1;
}

bool Igual(natural n, int m)
{   
    //Comprueba si los numeros ingresados son iguales
    if (n.valor == m) return true;

    return false;
}

int predecesor(natural n)
{
    //regresa el predecesor del numero natural
    return n.valor-1;
}

bool menor(natural n, int m)
{
    //funcion que regresa el menor de dos numeros 
    if(n.valor < m) return true;
    return false;
}

int suma(natural n, int m)
{
    //funcion que regresa la suma de dos naturales
    return n.valor + m;
}

int diferencia(natural n, int m)
{
    //funcion que regresa la resta de dos naturales
    return n.valor - m;
}
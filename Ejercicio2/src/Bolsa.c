#include "Bolsa.h"
#include <string.h>
#include <string.h>

Bolsa crear_bolsa()
{
    
    Bolsa B;
    char vacio[MAX2];
    B.len = 0;
    for (int i = 0; i < MAX2; i++)
    {
        strcpy(B.elem[i], vacio);
    }
    
}

Bolsa agregar(Bolsa *B, char c[])
{
    if(B->len < MAX && strlen(c) <MAX2)
    {
        strcpy(B->elem[B->len], c);
        B->len +=1;
    }
}

/**
 * @brief Prueba si una cadena está en bolsa
 * @date 27/02/2022 
 * @Param B- Bolsa a validar
 * param S- cadena a buscar
 * @return true- si existe la cadena
 * @return false- si no existe la cadena 
 */

bool dentro(Bolsa B, char c[])
{
   for(int i=0; i< B.len; i++){
       if( strcmp(B.elem[i], c)==0)
       {
           return true;
       }
   }
   return false;
}

bool es_vacia(Bolsa B)
{
    if(B.len==0) return true;
    return false;
}

int cuantos(Bolsa B, char c[])
{
    int cuent = 0;
    for (int i = 0; i < B.len ; i++)
    {
        if(strcmp(B.elem[i],c)==0){
            cuent += 1;
        }
    }
    return cuent;
}

Bolsa unir(Bolsa *B, Bolsa C)
{
    Bolsa D;
    int lim = B->len + C.len;
    D.len = lim;
    if (lim < MAX)
    {
        for (int i = 0; i < lim; i++)
        {
            if (i < B->len)
            {
                strcpy(D.elem[i],B->elem[i]);
            }else{
                strcpy(D.elem[i], C.elem[i-B->len]);
            }
            
        }
        
    }
        
}

int total(Bolsa B)
{
    return B.len;
}
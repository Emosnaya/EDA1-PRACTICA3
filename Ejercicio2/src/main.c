#include <stdio.h>
#include "Bolsa.h"

int main(){
    Bolsa B,C,D,E;

    B = crear_bolsa();
    printf("La Bolsa B es %s\n", B.elem);
    printf("Su longitud es %d\n", total(B));

    if (es_vacia(B)== true)
    {
        printf("Es vacia");
    }else{
        printf("No está vacía");
    }

    agregar(&C, "Hola");
    printf("El contenido de de C es %s\n",C.elem);
    printf("La longitud de C es %d\n", total(C));

    D = unir(&B, C);
    printf("El contenido de D[0] es %s\n", D.elem[0]);
    printf("El contenido de D[1] es %s\n", D.elem[1]);
    printf("El contenido de D[2] es %s\n", D.elem[2]);
    printf("La longitud de D es %d\n", total(D));

    E = unir(&D, C);
    printf("El contenido de E[0] es %s\n",E.elem[0]);
    printf("El contenido de E[1] es %s\n",E.elem[1]);
    printf("El contenido de E[2] es %s\n",E.elem[2]);
    printf("La longitud de E es %d\n", total(E));

    printf("B contiene a 'Hola' : %d\n", dentro(B,"Hola"));
    printf("C contiene a 'Hola' : %d\n", dentro(C,"Hola"));
    printf("D contiene a 'Hola' : %d\n", dentro(D,"Hola"));

    printf("Las veces que existe 'Hola en B: %d\n",cuantos(B,'Hola'));
    printf("Las veces que existe 'Hola en C: %d\n",cuantos(C,'Hola'));
    printf("Las veces que existe 'Hola en D: %d\n",cuantos(D,'Hola'));



    
    


    







    return 0;
}
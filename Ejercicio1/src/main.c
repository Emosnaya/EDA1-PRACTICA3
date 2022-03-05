#include <stdio.h>
#include "Natural.h"

int main(){
    natural a,b; //declaramos las estructuras
    int c,menu, x,d; //declaramos los enteros
    bool retorno; // boleano

    do{
            //Menu
        printf("1.- Crear un numero natural que es 0\n");
        printf("2.- Sucesor al numero natural ingresado\n");
        printf("3.- Verificar si el numero natural ingresado es 0\n");
        printf("4.- Verificar si dos numeros naturales ingresados son iguales\n");
        printf("5.- Suma de dos numeros naturales ingresados\n");
        printf("6.- Antecesor al numero natural ingresado   \n");
        printf("7.- Diferencia de dos numeros naturales ingresado   \n");
        printf("8.- Verifica si el primer numero natural ingresado es menor al segundo\n");
        printf("9.- Salir\n");
        scanf("%d", &menu);

        //Menu 
        switch (menu)
        {
        case 1:
                b = cero(); //se llama al funcion
                printf("Se creo el valor Natural %d\n", b.valor);

                x++;
            break;
        
        case 2: 
                //Solicitamos el numero natural
                printf("Ingrese un numero: ");
                scanf("%d", &a);
                c = sucesor(a); //Llamamos a la funcion sucesor, y enviamos el valor dado por el usuario
                printf("El sucesor es: %d\n", c);
                x++;
            break;

        case 3: 
                //solicitmaos el numero natural
                printf("Ingrese el primer numero: ");
                scanf("%d", &a);
                retorno = Escero(a); // llamamos a la funcion escero con el valor dado con el usuario
                if(retorno == true){
                    printf("True\n");
                }else{
                    printf("Falso\n");
                }
    
                x++;
            break;

        case 4: 
                //solicitamos dos valores al usuario 
                printf("Ingrese el primer numero: ");
                scanf("%d", &a);
                printf("\nIngrese el segundo numero: ");
                scanf("%d", &c);
                printf("¿Son iguales?\n");
                retorno = Igual(a, c); //llamamos a la funcion igual enviando los numeros dados 
                if(retorno == true){
                    printf("True\n"); //Imprimimos cierto 
                }else{
                    printf("Falso\n");
                }
                x++;
            break;

        case 5: 
                //Solicitamos dos numeros naturales
                printf("Ingrese el primer numero: ");
                scanf("%d", &a);
                printf("\nIngrese el segundo numero: ");
                scanf("%d", &c);
                d = suma(a, c); //llamamos a la funcion con los numeros ingreesados por el usuario
                printf("Su suma es: %d\n", d);
                x++;
            break;

        case 6: 
                //solicitamos un numero natural
                printf("Ingrese el numero: ");
                scanf("%d", &a);
                c = predecesor(a); //llamamos a funcion predecesor con el numero dado por el usuario
                printf("El antecesor es: %d\n", c);
                x++;
            break;

        case 7: 
                //Solicitamos dos numeros al usuario 
                printf("Ingrese el primer numero: ");
                scanf("%d", &a);
                printf("\nIngrese el segundo numero: ");
                scanf("%d", &c);
                d = diferencia(a, c); // llamamos a la funcion diferencia  con los numeros ingresados por el usuario
                printf("La diferencia es: %d\n", d);
                x++;
            break;

        case 8: 
                //Solicitar dos numeros al usuario 
                printf("Ingrese el primer numero: ");
                scanf("%d", &a);
                printf("\nIngrese el segundo numero: ");
                scanf("%d", &c);
                printf("¿Es menor?\n");
                retorno = menor(a,c); //llamamos a la funcion menor con los dos numeros dados
                if(retorno == true){
                    printf("True\n");
                }else{
                    printf("Falso\n");
                }
                x++;
            break;

        case 9:
                //dafault 
                printf("Adios");
                x++;
                break;
        
        default:
                //error
            printf("Ingresa una opcion valida\n");
        }
    }while(x == 0); //fin del while 

    return 0;
}
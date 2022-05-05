#include <stdio.h>
#include <stdlib.h>

// Josseth Rodriguez - A:goritmos y Programacion I
int main()
{
    // declaramos la variable
    int numerodelusuario;

    // recolectamos datos del usuario
    printf("Introduzca un numero : ");
    scanf("%d", &numerodelusuario);

    // esta es la ecuacion
    int respuesta = numerodelusuario % 2;

    // funcion que determinara si es par o impar
    if(respuesta == 0){
     printf("Tu numero es par");
    } else {
        printf("El numero es impar");
    }

}

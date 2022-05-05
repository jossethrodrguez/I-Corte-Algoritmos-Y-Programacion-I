#include <stdio.h>
#include <stdlib.h>

int main()
{




    printf("Vamos a Calcular el Area de Un Rectangulo \n");
    printf("  ___  \n");
    printf(" |   | \n");
    printf(" |   | \n");
    printf(" |   | \n");
    printf(" |___| \n \n");

    int base ;
    printf(" Primero, Ingresa el valor de la base : ");
    scanf("%d", &base);

    int altura ;
    printf(" Ahora, El valor de la altura : ");
    scanf("%d", &altura);


    int area = base*altura;

    if(area > 40 || altura > 10){
        printf("\n Este mensaje aparecera si, y solo si el area es mayor a 40 y la Altura es mayor a 10  \n");
    } else{
        printf("\n El valor del Area de %d \n", area);
        }



    return 0;
}

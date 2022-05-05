#include <stdio.h>
#include <stdlib.h>

// Josseth Rodriguez C.I:30502713
// Algoritmos y Programacion I - II0411 - 2022

int main(){
     // declaramos las variables
    double primer_numero;
    printf("\nEmpecemos!!! \n \n realizemos operaciones entre dos numeros \n ingresa el primer numero: ");
    scanf("%lf", &primer_numero);

    double segundo_numero;
    printf("\n ahora el segundo : ");
    scanf("%lf", &segundo_numero);

    // declaramos el operador de la operacion
    char operador ;
    printf("\n \n Ahora Elige si quieres Sumar o Restar\n Para sumar usa + \n Para restar usa - \n \n Escribelo : ");
    scanf(" %c", &operador);

    // declaramos la funcion de la operacion
    int valor;

    if(operador == '+'){
        valor = ("%f", (float)primer_numero + (float)segundo_numero);
     }else if(operador == '-'){
        valor = ("%f", (float)primer_numero - (float)segundo_numero);
     } else {
        printf("Por favor, ingresa un operador valido \n");
     }

     // declaramos la funcion del resultado
     if(valor == 420){
        printf("\nEste mensaje va a aparecer si, Y SOLO SI, tu resultado fue %d",valor,"\n \n");
     } else if(valor <= 0 && valor != 0){
        printf("Tu resultado dio negativo, fue %d", valor);
     } else if(valor >= 40){
        printf(" \n Muy Grande, es superior a 40 \n \n %d");
     } else if(valor <= -10){
        printf("\n Muy Pequeño, es Menor a -10 \n \n %d");
     }

      return 0;
}















#include <stdio.h>
#include <stdlib.h>

int main()
{
    // anunciando Promo
    printf("\n Bienvenido a 'Inversiones Yubraska: Venta de Zapatos y Variedades' \n Hoy tenemos una promocion para clientes Mayoristas \n\n");
    printf(" \n por cada 10 zapatos que compres obtendras un descuento de 10% \n Y si es Superior a 30 recibe un descuento por 40%\n El costo de Cada Zapato es 80$ \n \n");
    printf(" Cuantos Zapatos quieres comprar? : ");

    int cantidad ;
    scanf("%d", &cantidad);

    int costoInicial = cantidad * 80;

    //defincion del Valor del Descuento
    if(cantidad >= 10){

        int costoPorcentual = costoInicial * 0.10;
        int costoTotal = costoInicial - costoPorcentual;

        printf("\n  Tu cuenta hace %d$\n", costoTotal);
    }
    else if(cantidad >= 20){

        int costoPorcentual = costoInicial * 0.20;
        int costoTotal = costoInicial - costoPorcentual;

        printf("\n  Tu cuenta hace %d$\n", costoTotal);
    }
    else if(cantidad >= 30){

        int costoPorcentual = costoInicial * 0.40;
        int costoTotal = costoInicial - costoPorcentual;

        printf("\n  Tu cuenta hace %d$\n", costoTotal);
    }
    else{

        printf("\n  Tu cuenta hace %d$\n", costoInicial);
    }

    return 0;
}

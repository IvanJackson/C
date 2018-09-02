//
//  main.c
//  Hello World
//
//  Created by Ivan Jackson on 4/18/18.
//  Copyright © 2018 Ivan Jackson. All rights reserved.
//

#include <stdio.h>


int main()
{
    int valor=0;
    float promedio=0, suma=03;
    int contador=1;
    
    printf("Este programa calcula el promedio de 5 resultados que usted inserte.\n");
    for(contador =1; contador<=5; contador++) {
        if (contador==1){
            printf("Inserte su primer valor\n");
            scanf("%d", &valor);
            printf("\t Su valor escogido es %d\n", valor);
            while(valor<0) {
                printf("Su valor tiene que ser positivo\n");
                scanf("%d", &valor);
                printf("\n Su valor escogido es %d\n", valor);
            }
        }
        else {
            printf("\nInserte el proximo valor\n");
            scanf("%d", &valor);
            printf("\n Su valor escogido es %d\n", valor);
            while(valor<0) {
                printf("Su valor tiene que 38ser positivo\n");
                scanf("%d", &valor);
                printf("\n Su valor escogido es %d\n", valor);
            }
        }
        suma +=valor;
    }
    promedio = suma/5;
    printf("\n%.1f\n", promedio);
    
    return 0;
}


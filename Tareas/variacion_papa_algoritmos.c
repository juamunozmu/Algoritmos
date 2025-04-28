#include <stdio.h>

int main(void){
    float papa;
    int creditos_totales;
    int creditos_algoritmos = 3;
    float nota_definitiva_algoritmos = 0;

    printf("Ingresa tu P.P.P.A: ");
    scanf("%f", &papa);
    printf("\nIngresa el número de créditos cursados hasta el momento: ");
    scanf("%i", &creditos_totales);

    while(nota_definitiva_algoritmos <= 5){

        printf("%4.1f\t->\t %4.2f\n",nota_definitiva_algoritmos, (papa*creditos_totales+nota_definitiva_algoritmos*creditos_algoritmos)/(creditos_totales+creditos_algoritmos)-papa);
        nota_definitiva_algoritmos += 0.5;

    }
    
}


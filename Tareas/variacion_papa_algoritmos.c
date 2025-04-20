#include <stdio.h>

/* P.A.P.A = promedio */
/* 4.5*7 + 3*4 ... /(# créditos totales)*/
/* Final - Inicial = Variación*/
int nomb = 2;

int main(void){
    float papa = 4;
    printf("%f\n",papa);
    int creditos=120;
    /*scanf("%i", &creditos);*/
    
    int creditos_algoritmos = 3;
    float bandera = 0.0;
    while(bandera <= 5){

        printf("%4.1f\t->\t %4.3f\n",bandera, (papa*creditos+bandera*creditos_algoritmos)/(creditos+creditos_algoritmos)-papa);
        bandera += 0.5;

    }
    
}


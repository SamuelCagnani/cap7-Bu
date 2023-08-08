#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Calcula a área do círculo representado pelo raio fornecido.*/

float areaCirculo(float raio) {

    return (acos(-1) * pow(raio, 2));

}

/*Calcula a circunferência do círculo representado pelo raio fornecido.*/

float circunferenciaCirculo(float raio) {

    return (2 * (acos(-1) * raio));

}

int main() {

    float raio = 0;
    float area = 0;
    float circunferencia = 0;
    
    printf("Raio: ");
    scanf("%f", &raio);

    area = areaCirculo(raio);
    circunferencia = circunferenciaCirculo(raio);

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}
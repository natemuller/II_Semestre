#include "stdio.h"

    int main () {
    float base, altura, area;
    
    printf ("\nDe o valor da base do triangulo\n");
    scanf("%f", &base);
    printf ("Agora, de o valor da altura do triangulo");
    scanf ("%f", &altura);
    area = (base * altura) / 2;
    printf("Area do triangulo = %.2f u.m²", area);
    return 0;

}
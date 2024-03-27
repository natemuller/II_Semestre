#include "stdio.h"
int main() {

float Graus, Celsius = 0, Fahrenheit = 0, Kelvin = 0; 
float Valor = 0;

    printf("\nEscolha a conversao que desejas fazer\n");
    printf("\n1: Celsiuis para Kelvin e Fahrenheit");
    printf("\n2: Fahrenheit para Celsius e Kelvin");
    printf("\n3: Kelvin para Celsius e Fahrenheit\n");
    scanf("%f", &Graus); {

        while (1) {
            if (Graus == 1)  {
                printf("Coloque o seu valor em Celsius:\n");
                scanf("%f", &Valor);
                    // 1
                    float Celsius_Kelvin = (Valor + 273.15);
                    float Celsius_Fahrenheit = (Valor * 1.8 + 32); 
                printf("\nValor Celsius em:\n"); 
                printf("Fahrenheit: %.2f F\n", Celsius_Fahrenheit);
                printf("Kelvin: %.2f K\n", Celsius_Kelvin);
                        break;           }
            
            if (Graus == 2)  {
                printf("Coloque o seu valor em Fahrenheit:\n");
                scanf("%f", &Valor);
                    // 2
                    float Fahrenheit_Celsius = ((Valor - 32) * 0.55555556);
                    float Fahrenheit_Kelvin = ((Valor + 459.67) * 0.55555556);
                printf("\nValor Fahrenheit em:\n"); 
                printf("Celsius: %.2f C\n", Fahrenheit_Celsius);
                printf("Kelvin: %.2f K\n", Fahrenheit_Kelvin);
                        break;           }

            if (Graus == 3)  {
                printf("Coloque o seu valor em Kelvin:\n");
                scanf("%f", &Valor);
                    //3
                    float Kelvin_Celsius = (Valor - 273.15);
                    float Kelvin_Fahrenheit = (1.8 * (Valor - 273.15) + 32);
                printf("\nValor Kelvin em:\n"); 
                printf("Fahrenheit: %.2f F\n", Kelvin_Fahrenheit);
                printf("Celsius: %.2f C\n", Kelvin_Celsius);
                        break;           }
            
            else {
                printf("\nInforme um valor válido!\n");
                continue;                }
                                         
        }
    }
                return 0;
}
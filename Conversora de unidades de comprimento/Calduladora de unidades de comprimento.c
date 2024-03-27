#include "stdio.h"

int main() {

    float Unidade, Quilometros = 0, Metros = 0, Polegada = 0, Centimetros = 0, Milimetro = 0;
    float Valor = 0;
    // Tela inicial

    printf("\nEscolha a conversao que desejas fazer\n");
    printf("\n1: Km para M, Pol, Cm e Mm\n");
    printf("\n2: M para Km, Pol, Cm e Mm\n");
    printf("\n3: Pol para Km, M, Cm e Mm\n");
    printf("\n4: Cm para Km, M, Pol e Mm\n");
    printf("\n5: Mm para Km, M, Pol e Cm\n");
    scanf("%f", &Unidade); {

        while (1) {
            if (Unidade == 1)  {
                printf("Coloque o seu valor em Quilometros:\n");
                scanf("%f", &Valor);
                    // 1

                    float Km_M = ( Valor * 1000);
                    float Km_Pol = ( Valor * 39370 );
                    float Km_Cm = ( Valor * 100000);
                    float Km_Mm = ( Valor * 1000000); 

                printf("\nValor Km em:\n"); 
                printf("Metros: %.2f M\n", Km_M);
                printf("Polegadas: %.2f Pol\n", Km_Pol);
                printf("Centimetros: %.2f Cm\n", Km_Cm);
                printf("Milimetros: %.2f Mm\n", Km_Mm);

                        break;           }
            
            if (Unidade == 2)  {
                printf("Coloque o seu valor em Metros:\n");
                scanf("%f", &Valor);
                    // 2

                    float M_Km = ( Valor * 1000 );
                    float M_Pol = ( Valor * 39.37 );
                    float M_Cm = ( Valor * 100 );
                    float M_Mm = ( Valor * 1000 ); 

                printf("\nValor M em:\n"); 
                printf("Quilometros: %.2f Km\n", M_Km);
                printf("Polegadas: %.2f Pol\n", M_Pol);
                printf("Centimetros: %.2f Cm\n", M_Cm);
                printf("Milimetros: %.2f Mm\n", M_Mm);

                        break;           }

            if (Unidade == 3)  {
                printf("Coloque o seu valor em Polegadas:\n");
                scanf("%f", &Valor);
                    //3

                    float Pol_Km = ( Valor / 39370 );
                    float Pol_M = ( Valor / 39.37 );
                    float Pol_Cm = ( Valor * 2.54 );
                    float Pol_Mm = ( Valor * 25.4 ); 
                    
                printf("\nValor Pol em:\n"); 
                printf("Quilometros: %.2f Km\n", Pol_Km);
                printf("Metros: %.2f M\n", Pol_M);
                printf("Centimetros: %.2f Cm\n", Pol_Cm);
                printf("Milimetros: %.2f Mm\n", Pol_Mm);

                        break;           }

            if (Unidade == 4)  {
                printf("Coloque o seu valor em Centimetros:\n");
                scanf("%f", &Valor);
                    //4

                    float Cm_Km = ( Valor / 100000 );
                    float Cm_M = ( Valor / 100 );
                    float Cm_Pol = ( Valor / 2.54 );
                    float Cm_Mm = ( Valor * 10 ); 

                printf("\nValor Cm em:\n"); 
                printf("Quilometros: %.2f Km\n", Cm_Km);
                printf("Metros: %.2f M\n", Cm_M);
                printf("Polegadas: %.2f Pol\n", Cm_Pol);
                printf("Milimetros: %.2f Mm\n", Cm_Mm);

                        break;           }
            
            if (Unidade == 5)  {
                printf("Coloque o seu valor em Milimetros:\n");
                scanf("%f", &Valor);
                    //5

                    float Mm_Km = ( Valor / 1000000 );
                    float Mm_M = ( Valor / 1000 );
                    float Mm_Pol = ( Valor / 25.4 );
                    float Mm_Cm = ( Valor / 10); 

                printf("\nValor Mm em:\n"); 
                printf("Quilometros: %.2f Km\n", Mm_Km);
                printf("Metros: %.2f M\n", Mm_M);
                printf("Polegadas: %.2f Pol\n", Mm_Pol);
                printf("Centimetros: %.2f Cm\n", Mm_Cm);

                        break;           }
            
            else {
                printf("\nInforme um valor válido!\n");
                return 1;                }
                                         
        }
    }
                return 0;
}

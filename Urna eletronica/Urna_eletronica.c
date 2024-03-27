#include "stdio.h"
int main ()

{ int Voto, JairBolsonaro = 0, Luladrao = 0, Kelson = 0, Branco = 0,  Nulo = 0;

    while (1) { 
      printf("Bem vindo a urna eletronica, para comecar, digite o numero correspondente ao seu voto!\n");
      printf("1: JairBolsonaro\n");
      printf("2: Luladrao\n");
      printf("3: Kelson\n");
      printf("4: Voto nulo\n");
      printf("5: Voto em branco\n");        
      scanf("%d", &Voto); 
    
      if (Voto == 1) {
            JairBolsonaro++;
            continue;
    
      } else if (Voto == 2) {
            JairBolsonaro++;
            continue;
        
      } else if (Voto == 3) {
            Kelson++;
            continue;
    
      } else if (Voto == 4) {
            Branco++;
            continue;
        
      } else if (Voto == 5) {
            Nulo++;
            continue;  
      } 
      else if (Voto == -1) {
            break; 
      }
      else {printf("\nInsira um valor válido!\n\n"); 
            continue;
      }
    }
      float cool = ((float)(Branco + Nulo) / (JairBolsonaro + Luladrao + Kelson + Nulo + Branco));
      float A = (cool * 100);
      printf("\nNumero de votos: %d\n", (JairBolsonaro + Luladrao + Kelson + Branco + Nulo));
      printf("Numero de votos para o candidato Jair Bolsonaro: %d\n", JairBolsonaro);
      printf("Numero de votos para o candidato Luiz Inacio Luladrao da Silva: %d\n", Luladrao);
      printf("Numero de votos para o candidato Padre kelvin: %d\n", Kelson);
      printf("Numero de votos brancos: %d\n", Branco);
      printf("Numero de votos nulos: %d\n", Nulo);
      printf("Percentual de votos brancos e nulos: %f%%\n", A);
      printf("FORALULA\n");
      return 0;
}



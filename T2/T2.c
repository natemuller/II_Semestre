#include <stdio.h>

int main(void) {

  int a = 0; int b = 0; int c = 0; int k = 0;

  printf("Entre com k, a, b, c:\n");
  scanf("%d %d %d %d", &k, &a, &b, &c);

  int L[1000];
  L[0] = k;

  int i = 0;
  
  while (i < 999) {
    L[i+1] = ((L[i] * a) % b) + c;
    i++;
  }

  printf("Tabuleiro:\n");

  i = 0;

  while (i < 1000) {
    printf("L[%d] = %d\n", i, L[i]);
    i++;
  }
  printf("\n");

  int posicao = 0; int passos = 0; int s = 0;
  
  while (1) { 

    int s = L[posicao]; 

    if (s == 0) { 
      printf("Acabou! Parou na posicao %d depois de dar %d passinhos!\n", posicao, passos);
      break;
    } 
    if (s > 0) {
      L[posicao] = L[posicao] - 1;                   
      posicao = (posicao + s) % 1000; 
      passos = passos + s;     
    }
    else {
       L[posicao] = L[posicao] + 1; 
      posicao = (posicao + s + 1000) % 1000;
      passos = passos - s;
    }
  }

  return 0;
}
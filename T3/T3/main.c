#include "stdio.h"

void viraPalavras(char vet[], int tam) {
    
    int inicio = 0;
    int fim = tam - 1;
    char temp;

    while (inicio < fim) {
        temp = vet[inicio];
        vet[inicio] = vet[fim];
        vet[fim] = temp;
        inicio++;
        fim--;
    }

    inicio = 0;
    int palavraInicio = 0;

    while (inicio < tam) {
        while (inicio < tam && (vet[inicio] == ' ' || vet[inicio] == '\t')) {
            inicio++;
        }
        
        palavraInicio = inicio;

        while (inicio < tam && vet[inicio] != ' ' && vet[inicio] != '\t') {
            inicio++;
        }

        fim = inicio - 1;

        while (palavraInicio < fim) {
            temp = vet[palavraInicio];
            vet[palavraInicio] = vet[fim];
            vet[fim] = temp;
            palavraInicio++;
            fim--;
        }
    }
}

void rolaEsquerda(char vet[], int tam, int num) {
    
    if (num <= 0 || num >= tam) {
        return;
    }

    char temp[num];
    int i = 0;

    while (i < num) {
        temp[i] = vet[i];
        i++;
    }

    i = 0;

    while (i < tam - num) {
        vet[i] = vet[i + num];
        i++;
    }

    int j = 0;

    while (j < num) {
        vet[i] = temp[j];
        i++;
        j++;
    }
}

void advance (char vet[], int tam, int adv) {
    
    int i = 0;

    while (i < tam) {

        if ((vet[i] >= 'a' && vet[i] <= 'z') || (vet[i] >= 'A' && vet[i] <= 'Z')) {
            
            char base = (vet[i] >= 'a' && vet[i] <= 'z') ? 'a' : 'A';
            vet[i] = base + (vet[i] - base + adv) % 26;
        }
        
        i++;
    }
}

void transform(char vet[], int tam, char s1[], char s2[]) {
    
    int i = 0;
    
    while (i < tam) {
        
        char c = vet[i];
        int j = 0;
        
        while (s1[j] != '\0') {
            
            if (c == s1[j]) {
                vet[i] = s2[j];
                break;
            }
            j++;
        }
        i++;
    }
}

int main(void) {
    
    char vetor[256];
    int tam = 0;
    
    printf("Informe a string: ");
    
    char c;
    int i = 0;
    
    while (i < 255) {
        if (scanf("%c", &c) != 1 || c == '\n') {
            break;
        }
        
        vetor[tam++] = c;
        i++;
    }
    
    vetor[tam] = '\0';
    i = 0;
    viraPalavras(vetor, tam);
    
    while (i < 100) {
        
        int num = 5;
        rolaEsquerda(vetor, tam, i / 2);
        advance(vetor, tam, i / 3);
        i++;
        transform(vetor, tam, "abcdefghijklm", "bamdfhgjcielk");
    }
    
    printf("%s\n", vetor);
}

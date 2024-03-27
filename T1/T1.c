#include <stdio.h>

int main() {
    int a, c, d;
    float b;

    printf("Seja bem-vindo a central de cálculo salarial da Abango Corporation!\n");
    printf("Primeiramente, insira o seu salário base:\n");
    scanf("%f", &b);
    printf("Você possui quantos dependentes?\n");
    scanf("%d", &d);
    printf("Há quantos anos você trabalha na nossa empresa?\n");
    scanf("%d", &c);
    printf("Para finalizar, em que ano estamos?\n");
    scanf("%d", &a);

    // Verificação de ano bissexto:
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
        b += (b * 0.01); 
    }

    // Acréscimos dependentes
    float acrescimo_dependentes = 0;
    if (d <= 5) {
        acrescimo_dependentes = d * (b * 0.03);
    } else {
        acrescimo_dependentes = 5 * (b * 0.03);
    }

    // Acréscimos anos de casa
    float acrescimo_anos_de_casa = 0;

    if (d < 4) {
        acrescimo_anos_de_casa = (b * 0.04);
    } else if (c > 5 && c <= 10) {
        acrescimo_anos_de_casa = 2 * (b * 0.04);
    } else if (c > 10 && c <= 15) {
        acrescimo_anos_de_casa = 3 * (b * 0.04);
    } else if (c > 15 && c <= 20) {
        acrescimo_anos_de_casa = 4 * (b * 0.04);
    } else if (c > 20 && c <= 25) {
        acrescimo_anos_de_casa = 5 * (b * 0.04);
    } else if (c > 25 && c <= 30) {
        acrescimo_anos_de_casa = 6 * (b * 0.04);
    } else if (c > 30 && c % 5) {
        acrescimo_anos_de_casa = 6 * (b * 0.04);
    }

    else {
        if (d >= 4) {
        acrescimo_anos_de_casa = (b * 0.07);
    } else if (c > 6 && c <= 12) {
        acrescimo_anos_de_casa = 2 * (b * 0.07);
    } else if (c > 12 && c <= 18) {
        acrescimo_anos_de_casa = 3 * (b * 0.07);
    } else if (c > 24 && c <= 30) {
        acrescimo_anos_de_casa = 4 * (b * 0.07);
    } else if (c > 36 && c <= 42) {
        acrescimo_anos_de_casa = 5 * (b * 0.07);
    } else if (c > 42 && c <= 48) {
        acrescimo_anos_de_casa = 6 * (b * 0.07);
    } else if (c > 48 && c <= 54) {
        acrescimo_anos_de_casa = 7 * (b * 0.07);
    } else if (c > 54 && c % 6) {
        acrescimo_anos_de_casa = 7 * (b * 0.07);
    }

    }

    // Calculo do salário final
    float salario_final = b + acrescimo_anos_de_casa + acrescimo_dependentes;

    printf("O seu salário final será de %.2f $.\n", salario_final);

    return 0;
}
#include <stdio.h>

int main (){
    int populacao, populacao1;
    int numero, numero1;
    float area, area1;
    float pib, pib1;
    char estado, estado1;
    char nome[20], nome1[20];
    char codigo[20], codigo1[20];

    printf("Desafio Cartas do Super Trunfo!\n");

    printf("Carta 1: \n");

    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numero);


    printf("Carta 2: \n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", nome1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numero1);

    printf(" Carta 1:\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de Pontos Turísticos: %d\n", estado, codigo, nome, populacao, area, pib, numero);
    printf("Carta 2:\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de Pontos Turísticos: %d\n", estado1, codigo1, nome1, populacao1, area1, pib1, numero1);
}
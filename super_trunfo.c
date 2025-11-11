#include <stdio.h>
int main(){

    //declaração das variaveis da primeira carta

    char estado1;
    char codigo1[3];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;


    // declaração de variáveis da segunda carta

    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //cadastro da primeira carta

    printf("===Cadastro da carta 1===\n");
    printf("digite a letra da carta do estado (A-H):\n");
    scanf("%c" , &estado1);

    printf("digite o código da carta:\n");
    scanf("%s", codigo1);

    printf("digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("digite a população:\n");
    scanf("%d", &populacao1);

    printf("digite a area (em km²):\n");
    scanf("%f", &area1);

    printf("digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);


    //cadastro da segunda carta

    printf("===Cadastro da carta 2===\n");
    printf("digite a letra da carta do estado (A-H):\n");
    scanf("%c" , &estado2);

    printf("digite o código da carta:\n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("digite a população:\n");
    scanf("%d", &populacao2);

    printf("digite a area (em km²):\n");
    scanf("%f", &area2);

    printf("digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);


    //exibiçao dos dados cadastrados


    printf("===carta 1===\n");
    printf("Estado: %c\n" , estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d de pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("===carta 2===\n");
    printf("Estado: %c\n" , estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d de pessoas\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;


}
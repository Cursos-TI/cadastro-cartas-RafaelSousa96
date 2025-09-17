#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
//Declaração de variáveis para a Carta 1
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeCidadeCarta1[100];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicosCarta1;

// Declaração das variáveis para a Carta 2
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeCidadeCarta2[100];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicosCarta2;
  // Área para entrada de dados
  //Entrada de dados da Carta 1
    printf("Digite o estado da Carta 1: \n");

    printf("Estado (A-H): ");
    scanf(" %c", &estadoCarta1);

    printf("Codigo da carta (Ex: A01): ");
    scanf("%3s", codigoCarta1);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidadeCarta1);

    printf("População: ");
    scanf("%d", &populacaoCarta1);

    printf("Area (em Km²): ");
    scanf("%f", &areaCarta1);

    printf("PIB: ");
    scanf("%f", &pibCarta1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosCarta1);

    printf("\n");

    //Entrada de dados da carta 2
    printf("Digite o estado da Carta 2: \n");

    printf("Estado (A-H): ");
    scanf (" %c", &estadoCarta2);

    printf("Código da carta (Ex: B02): ");
    scanf("%3s", codigoCarta2);

    printf("Nome do Cidade: ");
    scanf("%s", nomeCidadeCarta2);

    printf("População: ");
    scanf("%d", &populacaoCarta2);

    printf("Area (em Km²): ");
    scanf("%f", &areaCarta2);

    printf("PIB: ");
    scanf("%f", &pibCarta2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosCarta2);

    printf("\n");

  // Área para exibição dos dados da cidade
    printf("Carta 1: \n");
    printf("Estado: %c \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidadeCarta1);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2fkm² \n",areaCarta1);
    printf("PIB: %.2f bilhões de reias \n", pibCarta1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCarta1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidadeCarta2);
    printf("População: %d \n", populacaoCarta2);
    printf("Área: %.2fkm² \n",areaCarta2);
    printf("PIB: %.2f bilhões de reias \n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCarta2);

return 0;
} 

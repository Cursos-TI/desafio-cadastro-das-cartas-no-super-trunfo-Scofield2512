#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    //Nome do Programa.
    printf("Desafio Super Trunfo!\n");

    // Declaração das variaveis.
    
    char estado1, estado2;
    char codigodacarta1[20], codigodacarta2[20];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;

    // Leitura dos dados inseridos pelo o usuario, para a carta 1.

    printf("\nDigite a letra do Estado: ");
    scanf("%c", &estado1);
    
    printf("Digite o código da carta: ");
    scanf("%s", &codigodacarta1);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomedacidade1);
    
    printf("Digite a população da Cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área da Cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB1);
    
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    //Impressão dos dados fornecidos e identificação da carta 1 cadastrada.
    
    printf("\nCarta 1: \n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigodacarta1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.1f Km² \n", area1);
    printf("PIB: %.1f Bilhões de reais.\n", PIB1);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos1);

    // Leitura dos dados inseridos pelo o usuario, para a carta 2.
    
    printf("\nDigite a letra do Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta: ");
    scanf("%s", &codigodacarta2);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomedacidade2);
    
    printf("Digite a população da Cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área da Cidade: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB2);
    
    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    //Impressão dos dados fornecidos e identificação da carta 2 cadastrada.
    
    printf("\nCarta 2: \n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigodacarta2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.1f Km² \n", area2);
    printf("PIB: %.1f Bilhões de reais. \n", PIB2);
    printf("Número de Pontos Turisticos: %d", pontosturisticos2);

    return 0;
}

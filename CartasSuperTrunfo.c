#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    printf("Desafio Super Trunfo!\n");

    
    char estado1, estado2;
    char codigodacarta1[20], codigodacarta2[20];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;

    printf("Digite a letra do Estado: \n");
    scanf("%c", &estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", &codigodacarta1);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomedacidade1);
    
    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);
    
    printf("Digite o número de Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Carta 1: \n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigodacarta1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f Bilhões de reais.\n", PIB1);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos1);

    
    
    printf("Digite a letra do Estado: \n");
    scanf("%c", &estado2);
    
    printf("Digite o código da carta: \n");
    scanf("%s", &codigodacarta2);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomedacidade2);
    
    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o número de Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Carta 2: \n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigodacarta2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.1f Km² \n", area2);
    printf("PIB: %.1f Bilhões de reais. \n", PIB2);
    printf("Número de Pontos Turisticos: %d", pontosturisticos2);


}

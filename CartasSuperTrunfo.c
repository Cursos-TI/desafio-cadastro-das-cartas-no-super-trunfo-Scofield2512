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
    scanf ("%c",&estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", &codigodacarta1);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomedacidade1);
    
    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", %PIB1);
    
    printf("Digite o número de Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Carta 1: \n")
    printf("Estado: %c \n");
    printf("Código: %c \n");
    printf("Nome da Cidade: %c \n");
    printf("População: %d \n", habitantes);
    printf("Área: %f \n", Km²);
    printf("PIB: %f \n", bilhões);
    printf("Número de Pontos Turisticos: %d\n", lugares);

    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

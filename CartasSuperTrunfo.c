#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo1[4], cidade1[20], estado1[20];
    int populacao1, pontos1;
    float area1, pib1;

    char codigo2[4], cidade2[20], estado2[20];
    int populacao2, pontos2;
    float area2, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro de Cartas Super Trunfo\n\n");

    printf("Carta 1\n");
   
    printf("Digite o nome do estado: \n");
    scanf(" %19[^\n]", estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %19[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos1);
    
    printf("\n");
    printf("Carta 2\n");
    
    printf("Digite o nome do estado: \n");
    scanf(" %19[^\n]", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %19[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    float densidade1 = populacao1/area1, densidade2 = populacao2/area2;
    float pibcapita1 = pib1/populacao1, pibcapita2 = pib2/populacao2;
    float superpoder1 = (float) populacao1 + area1 + pib1 +pontos1 + pibcapita1 + (1/densidade1);
    float superpoder2 = (float) populacao2 + area2 + pib2 +pontos2 + pibcapita2 + (1/densidade2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n");
    printf("RESULTADOS:\n\n");
    
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d hab.\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Nº de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab./Km²\n", densidade1);
    printf("PIB per Capita: %.2f bilhões de reais/hab.\n", pibcapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d hab.\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Nº de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab./Km²\n", densidade2);
    printf("PIB per Capita: %.2f bilhões de reais/hab.\n", pibcapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\n");

    int resultadopop, resultadoarea, resultadopib, resultadopontos, resultadodens, resultadopibcapita, resultadopoder;

    resultadopop = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontos = pontos1 > pontos2;
    resultadodens = densidade1 > densidade2;
    resultadopibcapita = pibcapita1 > pibcapita2;
    resultadopoder = superpoder1 > superpoder2;

    printf("COMPARAÇÃO DE CARTAS:\n\n");
    
    printf("População: Carta 1 venceu (%d)\n", resultadopop);
    printf("Área: Carta 1 venceu (%d)\n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadopib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadopontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadodens);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadopibcapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadopoder);

    printf("\n");

    return 0;
}
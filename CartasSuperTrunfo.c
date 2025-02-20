#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Larissa


int main() {

    char estado1[5], estado2[5], cod1[5], cod2[5], cidade1[10], cidade2[10];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, area2, pib2 , densidade1, densidade2 , pib_per_capita1, pib_per_capita2 , superP1, superP2;

    // modo novato e aventureiro

    printf("---- SUPER TRUNFO ---- \n");
    printf("Carta 1 \n");

    printf("Estado: ");
    scanf("%s", estado1);
    

    printf("Codigo da carta: ");
    scanf(" %s", cod1); 
    getchar();

    printf("Nome da cidade: ");
    scanf(" %s", cidade1); 
    getchar();
    
  
    printf("População: ");
    scanf(" %d", &populacao1);
    

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);


    // modo aventureiro - calcular a densidade populacional
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\n--------------------------\n");

    // Dados a serem exibidos..
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", cod1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Habitantes: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1); 
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
   
    //  Carta 2
    printf("\nCarta 2 \n");

    printf("Estado: ");
    scanf("%s", estado2);
    getchar();

    printf("Codigo da carta: ");
    scanf(" %s", cod2); 
    getchar();

    printf("Nome da cidade: ");
    scanf(" %30[^\n]", cidade2); 
    getchar();

    printf("População: ");
    scanf(" %d", &populacao2);
    getchar();

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);


    // modo aventureiro - calcular a densidade populacional
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n--------------------------\n");

    // dados a serem exibidos..
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", cod2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Habitantes: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2); 
    printf("PIB: %.2f bilhões de reais\n", pib2); 
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    // Mestre
    // Somatorio dos atributos
    superP1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    superP2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);


    printf("\nComparação de Cartas:\n");

    printf("População: %s (%d)\n", populacao1 > populacao2? "Carta 1 venceu" : "Carta 2 venceu", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %s (%d)\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu", area1 > area2 ? 1 : 0);
    printf("PIB: %s (%d)\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %s (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? "Carta 1 venceu" : "Carta 2 venceu", pontos_turisticos2 > pontos_turisticos2 ? 1 : 0);
    printf("Densidade Populacional: %s (%d)\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: %s (%d)\n", pib_per_capita1 > pib_per_capita2 ? "Carta 1 venceu" : "Carta 2 venceu", pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    printf("Super Poder: %s (%d)\n", superP1 > superP2 ? "Carta 1 venceu" : "Carta 2 venceu", superP1 > superP2 ? 1 : 0);

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

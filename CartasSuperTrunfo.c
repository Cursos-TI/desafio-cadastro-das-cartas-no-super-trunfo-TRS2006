#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Larissa


int main() {

    char nome[50];
    char codigo[60];
    int pontos_turisticos;
    unsigned int habitantes;
    float area, pib, densidadePopulacional , total;

    printf("---- SUPER TRUNFO ---- \n");
    printf("Carta 1 \n");

    printf("Cidade: ");
    scanf("%s", nome); 

    printf("Codigo da carta: ");
    scanf("%s", codigo); 

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Habitantes: ");
    scanf("%d", &habitantes);

    printf("Qual a area (em km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    // Calcula densidade populacional - pib
    densidadePopulacional = habitantes / area;

    total = pib / habitantes;

    // Dados a serem exibidos..
    printf("Cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Habitantes: %d \n", habitantes);
    printf("Área: %.2f km² \n", area); 
    printf("PIB: %.2f \n", pib); 
    printf("Densidade populacional: %f \n", densidadePopulacional);
    printf("Total: %.1f \n", total);

    char nome_[50];
    char codigo_[60];
    int pontos_turisticos_;
    unsigned int habitantes_;
    float area_, pib_, densidadePopulacional_ , total_;

    printf("\nCarta 2 \n");

    printf("Cidade: ");
    scanf("%s", nome_);

    printf("Codigo da carta: ");
    scanf("%s", codigo_); 

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_);

    printf("Habitantes: ");
    scanf("%d", &habitantes_);

    printf("Qual a area (em km²): ");
    scanf("%f", &area_);

    printf("PIB: ");
    scanf("%f", &pib_);

    // Calcula densidade populacional - pib
    densidadePopulacional_ = habitantes_ / area_;

     total_ = pib_ / habitantes_;

    // dados a serem exibidos..
    printf("Cidade 2: %s\n", nome_);
    printf("Código: %s\n", codigo_);
    printf("Pontos turísticos: %d\n", pontos_turisticos_);
    printf("Habitantes: %d \n", habitantes_);
    printf("Área: %.2f km² \n", area_); 
    printf("PIB: %.2f \n", pib_); 
    printf("Densidade populacional: %f \n", densidadePopulacional_);
    printf("Total: %.1f \n", total_);

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

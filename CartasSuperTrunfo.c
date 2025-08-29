#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() { 
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, estado2; 
    char codigo[5], codigo2[5];
    char cidade [30], cidade2[30];
    unsigned long int populacao, populacao2;
    float area, area2, densidade, densidade2;
    float pib, pib2, percapita, percapita2;
    int pontos, pontos2;
    float superpoder, superpoder2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Vamos criar duas cartas: \n");

    printf("Digite a letra do estado(A-H): \n");
    
    scanf(" %c", &estado);
    
    printf("Digite o código da carta (ex: B04, A02): \n");
    
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade (ex: Rio_de_Janeiro): \n");

    scanf("%s", &cidade);

    printf("Digite o número de habitantes da cidade(ex: 5234050): \n");

    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");

    scanf("%f", &area);

    printf("Digite o PIB do estado (em bilhões de reais): \n");

    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos no estado: \n");

    scanf("%d", &pontos);

    printf("Agora a Carta 2: \n");

    printf("Digite a letra do estado(A-H): \n");
    
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B04, A02): \n");
    
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade (ex: Rio_de_Janeiro): \n");

    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade(ex: 5234050): \n");

    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");

    scanf("%f", &area2);

    printf("Digite o PIB do estado: (em bilhões de reais)\n");

    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos no estado: \n");

    scanf("%d", &pontos2);
    // Cálculo de Atributos:
    densidade = (float)populacao / area; // Cálculo da densidade populacional
    densidade2 = (float)populacao2 / area2;
    percapita = (float)(pib * 1000000000) / populacao; // Cálculo do PIB per capita (multiplicando por 100000000 para torná-lo um cálculo realista)
    percapita2 = (float)(pib2 * 1000000000) / populacao2;
    superpoder = (float)populacao + area + pib + (float)pontos + percapita + (1/densidade);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + percapita2 + (1/densidade2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1: \n");
    printf("\n"); // Espaço para más legibilidade 

    printf("Estado: %c \n", estado);
    
    printf("Código: %s \n", codigo);

    printf("Nome da Cidade: %s \n", cidade);

    printf("População: %d \n", populacao);

    printf("Área: %.2fkm² \n", area); // Formatação feita para 2 casas decimais

    printf("PIB: %.2f Bilhões de reais \n", pib);

    printf("Número de Pontos Turísticos: %d \n", pontos);

    printf("Densidade Populacional: %.2f hab/km² \n", densidade);

    printf("PIB per Capita: %.2f reais \n", percapita);

    printf("Superpoder: %.2f \n", superpoder);
    // Exibir os dados da segunda carta 
    printf("\n"); // Espaço para separar as cartas
    printf("Carta 2: \n");
    printf("\n"); // Espaço para separar as cartas

    printf("Estado: %c \n", estado2);
    
    printf("Código: %s \n", codigo2);

    printf("Nome da Cidade: %s \n", cidade2);

    printf("População: %d \n", populacao2);

    printf("Área: %.2fkm² \n", area2);

    printf("PIB: %.2f Bilhões de reais \n", pib2);

    printf("Número de Pontos Turísticos: %d \n", pontos2);

    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);

    printf("PIB per Capita: %.2f reais \n", percapita2);

    printf("Superpoder: %.2f \n", superpoder2);
    printf("\n");
    // Comparação das cartas
    printf("Comparação das cartas(se for 1, a carta 1 ganhou, se for 0 a carta 2 ganhou): \n");
    printf("\n");
    printf("População: %d\n", populacao > populacao2 );
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos > pontos2);
    printf("Densidade Populacional: %d\n", densidade < densidade2); // Aqui o menor valor ganha o ponto
    printf("PIB per Capita: %d\n", percapita > percapita2);
    printf("Superpoder: %d\n", superpoder > superpoder2 );
    
    return 0;
}

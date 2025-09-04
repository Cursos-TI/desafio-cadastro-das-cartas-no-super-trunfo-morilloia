#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() { 
    // Declaração das Variáveis:
    // Cartas predefinidas para o nivel aventureiro do desafio
    char estado = 'A';
    char estado2 = 'B';
    char codigo[5] = "A01", codigo2[5] = "B02";
    char cidade [30] = "São Paulo", cidade2[30] = "Rio de Janeiro";
    unsigned long int populacao = 12325000, populacao2 = 6748000;
    float area = 1521.11, area2 = 1200.25;
    float densidade, densidade2;
    float pib = 699.28, pib2 = 300.50;
    float percapita, percapita2;
    int pontos = 50, pontos2 = 30;
    float superpoder, superpoder2;
    int opcao, atributo;
    // Cadastro das Cartas: (Feito comentario para o nivel aventureiro)

    /*printf("Vamos criar duas cartas: \n");
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
    */
    // Cálculo de Atributos:
    densidade = (float)populacao / area; // Cálculo da densidade populacional
    densidade2 = (float)populacao2 / area2;
    percapita = (float)(pib * 1000000000) / populacao; // Cálculo do PIB per capita (multiplicando por 100000000 para torná-lo um cálculo realista)
    percapita2 = (float)(pib2 * 1000000000) / populacao2;
    superpoder = (float)populacao + area + pib + (float)pontos + percapita + (1/densidade);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + percapita2 + (1/densidade2);
    // Menu Interativo
    printf("### Menu Principal: ###\n");
    printf("1 - Comparar Cartas\n");
    printf("2 - Mostrar Cartas\n");
    printf("3 - Sair\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Qual atributo deseja comparar?\n");
            printf("1 - Nome\n");
            printf("2 - População\n");
            printf("3 - Área\n");
            printf("4 - PIB\n");
            printf("5 - Pontos Turísticos\n");
            printf("6 - Densidade Demográfica\n");
            printf("7 - Sair\n");
            printf("Digite a opção desejada: \n");
            scanf("%d", &atributo);
            switch (atributo) {
                case 1:
                    printf("Carta 1: %s - Carta 2: %s\n", cidade, cidade2); // Comparar Nome
                    break;
                case 2:
                    printf("Carta 1(%s): População: %lu\n", cidade, populacao); // Comparar População
                    printf("Carta 2(%s): População: %lu\n", cidade2, populacao2);
                    if (populacao > populacao2) {
                    printf("### A Carta 1(%s) venceu! ###\n", cidade);
                    } else if (populacao2 > populacao) {
                    printf("### A Carta 2(%s) venceu! ###\n", cidade2);
                    } else {
                    printf("### Empate!!! ###");
                    }
                break;
                case 3:
                    printf("Carta 1(%s): Área: %.2f\n", cidade, area); // Comparar Area
                    printf("Carta 2(%s): Área: %.2f\n", cidade2, area2);
                    if (area > area2) {
                    printf("### A Carta 1(%s) venceu! ###\n", cidade);
                    } else if (area2 > area) {
                    printf("### A Carta 2(%s) venceu! ###\n", cidade2);
                    } else {
                    printf("### Empate!!! ###");
                    }
                break;
                case 4:
                    printf("Carta 1(%s): : %.2f\n", cidade, pib); // Comparar PIB
                    printf("Carta 2(%s): População: %.2f\n", cidade2, pib2);
                    if (pib > pib2) {
                    printf("### A Carta 1(%s) venceu! ###\n", cidade);
                    } else if (pib2 > pib) {
                    printf("### A Carta 2(%s) venceu! ###\n", cidade2);
                    } else {
                    printf("### Empate!!! ###");
                    }
                break;
                case 5:
                    printf("Carta 1(%s): Pontos Turísticos: %d\n", cidade, pontos); // Comparar Pontos
                    printf("Carta 2(%s): Pontos Turísticos: %d\n", cidade2, pontos2);
                    if (pontos > pontos2) {
                    printf("### A Carta 1(%s) venceu! ###\n", cidade);
                    } else if (pontos2 > pontos) {
                    printf("### A Carta 2(%s) venceu! ###\n", cidade2);
                    } else {
                    printf("### Empate!!! ###");
                    }
                break;
                case 6:
                    printf("Carta 1(%s) - Densidade Demográfica: %.2f\n", cidade, densidade); // Comparar Densidade
                    printf("Carta 2(%s) - Densidade Demográfica: %.2f\n", cidade2, densidade2);
                    if (densidade2 > densidade) {
                    printf("### A Carta 1(%s) venceu! ###\n", cidade);
                    } else if (densidade > densidade2) {
                    printf("### A Carta 2(%s) venceu! ###\n", cidade2);
                    } else {
                    printf("### Empate!!! ###");
                    }
                break;
                case 7:
                    break;
                default:
                printf("Opção inválida!\n");
                    break;
            }
            break;
        case 2:
            // Mostrar Cartas
            printf("Carta 1: \n");
            printf("\n"); // Espaço para más legibilidade 

            printf("Estado: %c \n", estado);
    
            printf("Código: %s \n", codigo);

            printf("Nome da Cidade: %s \n", cidade);

            printf("População: %lu \n", populacao);

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

            printf("População: %lu \n", populacao2);

            printf("Área: %.2fkm² \n", area2);

            printf("PIB: %.2f Bilhões de reais \n", pib2);

            printf("Número de Pontos Turísticos: %d \n", pontos2);

            printf("Densidade Populacional: %.2f hab/km² \n", densidade2);

            printf("PIB per Capita: %.2f reais \n", percapita2);

            printf("Superpoder: %.2f \n", superpoder2);
            printf("\n"); // Espaço para más legibilidade
                    break;
        case 3:
            // Sair
            break;
        default:
        printf("Opção inválida!\n");
            break;
                 }     

}

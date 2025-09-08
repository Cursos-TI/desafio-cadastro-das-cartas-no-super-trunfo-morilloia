#include <stdio.h>

// Desafio Super Trunfo - Países
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
    float pib = 300.50, pib2 = 300.50;
    float percapita, percapita2;
    int pontos = 50, pontos2 = 50;
    float superpoder, superpoder2;
    int opcao, atributo, atributoMultiplo1, atributoMultiplo2;
    // Cadastro das Cartas: (Eliminado, pois as cartas são predefinidas)
    // Cálculo de Atributos:
    densidade = (float)populacao / area; // Cálculo da densidade populacional
    densidade2 = (float)populacao2 / area2;
    percapita = (float)(pib * 1000000000) / populacao; // Cálculo do PIB per capita (multiplicando por 100000000 para torná-lo um cálculo realista)
    percapita2 = (float)(pib2 * 1000000000) / populacao2;
    superpoder = (float)populacao + area + pib + (float)pontos + percapita + (1/densidade);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + percapita2 + (1/densidade2);
    // Menu Interativo
    printf("### Menu Principal: ###\n");
    printf("1 - Comparar Multiplos Atributos\n");
    printf("2 - Mostrar Cartas\n");
    printf("3 - Sair\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        float valorAtributo1Carta1, valorAtributo1Carta2; // Variáveis para armazenar os valores dos atributos selecionados
        float valorAtributo2Carta1, valorAtributo2Carta2; 
        float somaAtributo1 = 0, somaAtributo2 = 0; // Variáveis para armazenar a soma dos atributos
        int resultado;
            // Comparar Multiplos Atributos
            printf("Comparando múltiplos atributos:\n");
            printf("Escolha o primeiro atributo para comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            printf("Digite a opção desejada: \n");
            scanf("%d", &atributoMultiplo1);

            printf("Escolha o segundo atributo para comparar:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            printf("Digite a opção desejada: \n");
            scanf("%d", &atributoMultiplo2);
            if (atributoMultiplo1 < 1 || atributoMultiplo1 > 5 || atributoMultiplo2 < 1 || atributoMultiplo2 > 5) {
                printf("Opção inválida! Escolha atributos entre 1 e 5.\n");
                break;
            }
            if (atributoMultiplo1 == atributoMultiplo2) {
                printf("Atributos iguais! Escolha atributos diferentes.\n");
                break;
            } else {
                if ((atributoMultiplo1 == 1 && atributoMultiplo2 == 2) || (atributoMultiplo1 == 2 && atributoMultiplo2 == 1)) { // População e Área / Área e População
                    valorAtributo1Carta1 = populacao;
                    valorAtributo1Carta2 = populacao2;
                    valorAtributo2Carta1 = area;
                    valorAtributo2Carta2 = area2;
                    printf("Carta 1(%s): População: %lu, Área: %.2fkm²\n", cidade, populacao, area);
                    printf("Carta 2(%s): População: %lu, Área: %.2fkm²\n", cidade2, populacao2, area2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("População - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence na População!\n");

                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence na População!\n");
                    } else {
                        printf("Empate na População!\n");
                    }
                    printf("Área - Carta 1: %.2fkm² vs Carta 2: %.2fkm²\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 1 vence na Área!\n");
                    } else if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 2 vence na Área!\n");
                    } else {
                        printf("Empate na Área!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if ((atributoMultiplo1 == 1 && atributoMultiplo2 == 3) || (atributoMultiplo1 == 3 && atributoMultiplo2 == 1)) { // População e PIB / PIB e População
                    valorAtributo1Carta1 = populacao;
                    valorAtributo1Carta2 = populacao2;
                    valorAtributo2Carta1 = pib;
                    valorAtributo2Carta2 = pib2;
                    printf("Carta 1(%s): População: %lu, PIB: %.2f Bilhões de reais\n", cidade, populacao, pib);
                    printf("Carta 2(%s): População: %lu, PIB: %.2f Bilhões de reais\n", cidade2, populacao2, pib2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("População - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence na População!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence na População!\n");
                    } else {
                        printf("Empate na População!\n");
                    }
                    printf("PIB - Carta 1: %.2f Bilhões de reais vs Carta 2: %.2f Bilhões de reais\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 1 vence no PIB!\n");
                    } else if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 2 vence no PIB!\n");
                    } else {
                        printf("Empate no PIB!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if (atributoMultiplo1 == 1 && atributoMultiplo2 == 4) { // População e Pontos Turísticos / Pontos Turísticos e População
                    valorAtributo1Carta1 = populacao;
                    valorAtributo1Carta2 = populacao2;
                    valorAtributo2Carta1 = pontos;
                    valorAtributo2Carta2 = pontos2;
                    printf("Carta 1(%s): População: %lu, Pontos Turísticos: %d\n", cidade, populacao, pontos);
                    printf("Carta 2(%s): População: %lu, Pontos Turísticos: %d\n", cidade2, populacao2, pontos2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("População - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence na População!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence na População!\n");
                    } else {
                        printf("Empate na População!\n");
                    }
                    printf("Pontos Turísticos - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 1 vence nos Pontos Turísticos!\n");
                    } else if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 2 vence nos Pontos Turísticos!\n");
                    } else {
                        printf("Empate nos Pontos Turísticos!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if (atributoMultiplo1 == 1 && atributoMultiplo2 == 5) { // População e Densidade Demográfica / Densidade Demográfica e População
                    valorAtributo1Carta1 = populacao;
                    valorAtributo1Carta2 = populacao2;
                    valorAtributo2Carta1 = densidade;
                    valorAtributo2Carta2 = densidade2;
                    printf("Carta 1(%s): População: %lu, Densidade Demográfica: %.2fhab/km²\n", cidade, populacao, densidade);
                    printf("Carta 2(%s): População: %lu, Densidade Demográfica: %.2fhab/km²\n", cidade2, populacao2, densidade2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("População - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence na População!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence na População!\n");
                    } else {
                        printf("Empate na População!\n");
                    }
                    printf("Densidade Demográfica - Carta 1: %.2fhab/km² vs Carta 2: %.2fhab/km²\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 1 vence na Densidade Demográfica!\n");
                    } else if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 2 vence na Densidade Demográfica!\n");
                    } else {
                        printf("Empate na Densidade Demográfica!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if ((atributoMultiplo1 == 2 && atributoMultiplo2 == 3) || (atributoMultiplo1 == 3 && atributoMultiplo2 == 2)) { // Área e PIB / PIB e Área
                    valorAtributo1Carta1 = area;
                    valorAtributo1Carta2 = area2;
                    valorAtributo2Carta1 = pib;
                    valorAtributo2Carta2 = pib2;
                    printf("Carta 1(%s): Área: %.2fkm², PIB: %.2f Bilhões de reais\n", cidade, area, pib);
                    printf("Carta 2(%s): Área: %.2fkm², PIB: %.2f Bilhões de reais\n", cidade2, area2, pib2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("Área - Carta 1: %.2fkm² vs Carta 2: %.2fkm²\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence na Área!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence na Área!\n");
                    } else {
                        printf("Empate na Área!\n");
                    }
                    printf("PIB - Carta 1: %.2f Bilhões de reais vs Carta 2: %.2f Bilhões de reais\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 1 vence no PIB!\n");
                    } else if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 2 vence no PIB!\n");
                    } else {
                        printf("Empate no PIB!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;

                } else if ((atributoMultiplo1 == 2 && atributoMultiplo2 == 4) || (atributoMultiplo1 == 4 && atributoMultiplo2 == 2)) { // Área e Pontos Turísticos / Pontos Turísticos e Área
                    valorAtributo1Carta1 = area;
                    valorAtributo1Carta2 = area2;
                    valorAtributo2Carta1 = pontos;
                    valorAtributo2Carta2 = pontos2;
                    printf("Carta 1(%s): Área: %.2fkm², Pontos Turísticos: %d\n", cidade, area, pontos);
                    printf("Carta 2(%s): Área: %.2fkm², Pontos Turísticos: %d\n", cidade2, area2, pontos2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("Área - Carta 1: %.2fkm² vs Carta 2: %.2fkm²\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence na Área!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence na Área!\n");
                    } else {
                        printf("Empate na Área!\n");
                    }
                    printf("Pontos Turísticos - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 1 vence nos Pontos Turísticos!\n");
                    } else if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 2 vence nos Pontos Turísticos!\n");
                    } else {
                        printf("Empate nos Pontos Turísticos!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if ((atributoMultiplo1 == 2 && atributoMultiplo2 == 5) || (atributoMultiplo1 == 5 && atributoMultiplo2 == 2)) { // Área e Densidade Demográfica / Densidade Demográfica e Área
                    valorAtributo1Carta1 = area;
                    valorAtributo1Carta2 = area2;
                    valorAtributo2Carta1 = densidade;
                    valorAtributo2Carta2 = densidade2;
                    printf("Carta 1(%s): Área: %.2fkm², Densidade Demográfica: %.2fhab/km²\n", cidade, area, densidade);
                    printf("Carta 2(%s): Área: %.2fkm², Densidade Demográfica: %.2fhab/km²\n", cidade2, area2, densidade2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("Área - Carta 1: %.2fkm² vs Carta 2: %.2fkm²\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence na Área!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence na Área!\n");
                    } else {
                        printf("Empate na Área!\n");
                    }
                    printf("Densidade Demográfica - Carta 1: %.2fhab/km² vs Carta 2: %.2fhab/km²\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 1 vence na Densidade Demográfica!\n");
                    } else if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 2 vence na Densidade Demográfica!\n");
                    } else {
                        printf("Empate na Densidade Demográfica!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if ((atributoMultiplo1 == 3 && atributoMultiplo2 == 4) || (atributoMultiplo1 == 4 && atributoMultiplo2 == 3)) { // PIB e Pontos Turísticos / Pontos Turísticos e PIB
                    valorAtributo1Carta1 = pib;
                    valorAtributo1Carta2 = pib2;
                    valorAtributo2Carta1 = pontos;
                    valorAtributo2Carta2 = pontos2;
                    printf("Carta 1(%s): PIB: %.2f Bilhões de reais, Pontos Turísticos: %d\n", cidade, pib, pontos);
                    printf("Carta 2(%s): PIB: %.2f Bilhões de reais, Pontos Turísticos: %d\n", cidade2, pib2, pontos2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("PIB - Carta 1: %.2f Bilhões de reais vs Carta 2: %.2f Bilhões de reais\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence no PIB!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence no PIB!\n");
                    } else {
                        printf("Empate no PIB!\n");
                    }
                    printf("Pontos Turísticos - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 1 vence nos Pontos Turísticos!\n");
                    } else if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 2 vence nos Pontos Turísticos!\n");
                    } else {
                        printf("Empate nos Pontos Turísticos!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if ((atributoMultiplo1 == 3 && atributoMultiplo2 == 5) || (atributoMultiplo1 == 5 && atributoMultiplo2 == 3)) { // PIB e Densidade Demográfica/ Densidade Demográfica e PIB
                    valorAtributo1Carta1 = pib;
                    valorAtributo1Carta2 = pib2;
                    valorAtributo2Carta1 = densidade;
                    valorAtributo2Carta2 = densidade2;
                    printf("Carta 1(%s): PIB: %.2f Bilhões de reais, Densidade Demográfica: %.2fhab/km²\n", cidade, pib, densidade);
                    printf("Carta 2(%s): PIB: %.2f Bilhões de reais, Densidade Demográfica: %.2fhab/km²\n", cidade2, pib2, densidade2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("PIB - Carta 1: %.2f Bilhões de reais vs Carta 2: %.2f Bilhões de reais\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence no PIB!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence no PIB!\n");
                    } else {
                        printf("Empate no PIB!\n");
                    }
                    printf("Densidade Demográfica - Carta 1: %.2fhab/km² vs Carta 2: %.2fhab/km²\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 1 vence na Densidade Demográfica!\n");
                    } else if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 2 vence na Densidade Demográfica!\n");
                    } else {
                        printf("Empate na Densidade Demográfica!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                }
                    break;
                } else if ((atributoMultiplo1 == 4 && atributoMultiplo2 == 5) || (atributoMultiplo1 == 5 && atributoMultiplo2 == 4)) { // Pontos Turísticos e Densidade Demográfica / Densidade Demográfica e Pontos Turísticos
                    valorAtributo1Carta1 = pontos;
                    valorAtributo1Carta2 = pontos2;
                    valorAtributo2Carta1 = densidade;
                    valorAtributo2Carta2 = densidade2;
                    printf("Carta 1(%s): Pontos Turísticos: %d, Densidade Demográfica: %.2fhab/km²\n", cidade, pontos, densidade);
                    printf("Carta 2(%s): Pontos Turísticos: %d, Densidade Demográfica: %.2fhab/km²\n", cidade2, pontos2, densidade2);
                    printf("\n"); // Espaço para más legibilidade
                    printf("Comparando os atributos selecionados:\n");
                    printf("Pontos Turísticos - Carta 1: %.0f vs Carta 2: %.0f\n", valorAtributo1Carta1, valorAtributo1Carta2);
                    if (valorAtributo1Carta1 > valorAtributo1Carta2) {
                        printf("Carta 1 vence nos Pontos Turísticos!\n");
                    } else if (valorAtributo1Carta1 < valorAtributo1Carta2) {
                        printf("Carta 2 vence nos Pontos Turísticos!\n");
                    }
                    else {
                        printf("Empate nos Pontos Turísticos!\n");
                    }
                    printf("Densidade Demográfica - Carta 1: %.2fhab/km² vs Carta 2: %.2fhab/km²\n", valorAtributo2Carta1, valorAtributo2Carta2);
                    if (valorAtributo2Carta1 < valorAtributo2Carta2) {
                        printf("Carta 1 vence na Densidade Demográfica!\n");
                    } else if (valorAtributo2Carta1 > valorAtributo2Carta2) {
                        printf("Carta 2 vence na Densidade Demográfica!\n");
                    } else {
                        printf("Empate na Densidade Demográfica!\n");
                    }
                    // Soma dos atributos para determinar o vencedor final
                    somaAtributo1 = valorAtributo1Carta1 + valorAtributo2Carta1;
                    somaAtributo2 = valorAtributo1Carta2 + valorAtributo2Carta2;
                    printf("Soma dos atributos - Carta 1: %.2f vs Carta 2: %.2f\n", somaAtributo1, somaAtributo2);

                    if (somaAtributo1 == somaAtributo2 ) {
                        printf("Empate!\n");
                        break;
                    } else{
                        resultado = somaAtributo1 > somaAtributo2 ? 1 : 0;
                        if (resultado == 1) {
                            printf("Carta 1 é a vencedora!\n");
                        } else {
                            printf("Carta 2 é a vencedora!\n");
                    } 
                    break;
                }
                    
                    break;
                } else {
                    printf("Opção inválida!\n");
                    break;
                }
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

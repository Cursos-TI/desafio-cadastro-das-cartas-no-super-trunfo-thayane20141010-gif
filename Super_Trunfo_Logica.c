#include <stdio.h> // Biblioteca para as Funções de Entrada e Saida de Dados

int main()
{
    // ---DECLARAÇÃO DE VARIÁVEIS DAS CARTAS 1 E 2---

    // Atributos da carta 1 
    char estado1;
    char codigodacarta1[5];
    char nomedacidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numerodepontoturistico1;
    float Densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    // Atributos da carta 2 
    char estado2;
    char codigodacarta2[5];
    char nomedacidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numerodepontoturistico2;
    float Densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // Variáveis para a implementação da lógica do Nível Mestre
    int escolha1, escolha2;
    float valor1_carta1 = 0, valor1_carta2 = 0, valor2_carta1 = 0, valor2_carta2 = 0;
    float soma_carta1, soma_carta2;

    // --- COLETA DE DADOS ---

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (Uma Letra): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigodacarta1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade1);
    printf("Qual o Numero de Habitantes? ");
    scanf("%lu", &populacao1);
    printf("Qual a Area em Km²? ");
    scanf("%f", &area1);
    printf("Qual o PIB (em bilhoes)? ");
    scanf("%f", &pib1);
    printf("Qual a Quantidade de Pontos Turisticos? ");
    scanf("%d", &numerodepontoturistico1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (Uma Letra): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigodacarta2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomedacidade2);
    printf("Qual o Numero de Habitantes? ");
    scanf("%lu", &populacao2);
    printf("Qual a Area em Km²? ");
    scanf("%f", &area2);
    printf("Qual o PIB (em bilhoes)? ");
    scanf("%f", &pib2);
    printf("Qual a Quantidade de Pontos Turisticos? ");
    scanf("%d", &numerodepontoturistico2);

    // --- CÁLCULOS DENSIDADE POPULACIONAL, PIBPERCAPITA E SUPER PODER ---
    Densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)numerodepontoturistico1 + pibpercapita1 + (1.0 / Densidadepopulacional1);

    Densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)numerodepontoturistico2 + pibpercapita2 + (1.0 / Densidadepopulacional2);

    // ---EXIBIÇÃO DAS CARTAS ---
    
    printf("*** HORA DA BATALHA ***\n");

    printf("\n*** CARTA 1: %s (%c) - %s ***\n", nomedacidade1, estado1, codigodacarta1);
    printf("1-População: %lu\n", populacao1);
    printf("2-Área: %.2f km²\n", area1);
    printf("3-PIB: %.2f Bilhões\n", pib1);
    printf("4-Pontos Turísticos: %d\n", numerodepontoturistico1);
    printf("5-PIB per Capita: R$ %.2f\n", pibpercapita1);
    printf("6-Densidade: %.2f hab/km²\n", Densidadepopulacional1);
    printf("7-Super Poder: %.2f\n", superpoder1);

    printf("\n*** CARTA 2: %s (%c) - %s ***\n", nomedacidade2, estado2, codigodacarta2);
    printf("1-População: %lu\n", populacao2);
    printf("2-Área: %.2f km²\n", area2);
    printf("3-PIB: %.2f Bilhões\n", pib2);
    printf("4-Pontos Turísticos: %d\n", numerodepontoturistico2);
    printf("5-PIB per Capita: R$ %.2f\n", pibpercapita2);
    printf("6-Densidade: %.2f hab/km²\n", Densidadepopulacional2);
    printf("7-Super Poder: %.2f\n", superpoder2);

    // ---IMPLEMENTAÇÃO DA LÓGICA DO NÍVEL MESTRE ---
    printf("\n\n*** HORA DA BATALHA! ***\n");
    printf("Escolha o PRIMEIRO atributo para a batalha (1-7): ");
    scanf("%d", &escolha1);

    printf("Escolha o SEGUNDO atributo (1-7, diferente do primeiro): ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("\nERRO: Você não pode escolher o mesmo atributo duas vezes. Jogo encerrado.\n");
        return 1;
    }
    if (escolha1 < 1 || escolha1 > 7 || escolha2 < 1 || escolha2 > 7) {
        printf("\nERRO: Escolha inválida. Por favor, use números de 1 a 7. Jogo encerrado.\n");
        return 1;
    }

    switch(escolha1) {
        case 1: valor1_carta1 = (float)populacao1; valor1_carta2 = (float)populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = (float)numerodepontoturistico1; valor1_carta2 = (float)numerodepontoturistico2; break;
        case 5: valor1_carta1 = pibpercapita1; valor1_carta2 = pibpercapita2; break;
        case 6: valor1_carta1 = Densidadepopulacional1; valor1_carta2 = Densidadepopulacional2; break;
        case 7: valor1_carta1 = superpoder1; valor1_carta2 = superpoder2; break;
    }
    switch(escolha2) {
        case 1: valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = (float)numerodepontoturistico1; valor2_carta2 = (float)numerodepontoturistico2; break;
        case 5: valor2_carta1 = pibpercapita1; valor2_carta2 = pibpercapita2; break;
        case 6: valor2_carta1 = Densidadepopulacional1; valor2_carta2 = Densidadepopulacional2; break;
        case 7: valor2_carta1 = superpoder1; valor2_carta2 = superpoder2; break;
    }
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n--- Resultado Final da Rodada ---\n");
    printf("Soma dos atributos para %s: %.2f\n", nomedacidade1, soma_carta1);
    printf("Soma dos atributos para %s: %.2f\n", nomedacidade2, soma_carta2);

    if (soma_carta1 == soma_carta2) {
        printf("\n*** RESULTADO DA RODADA: EMPATE! ***\n");
    } else {
        printf("\n*** VENCEDOR DA RODADA: %s! ***\n", (soma_carta1 > soma_carta2) ? nomedacidade1 : nomedacidade2);
    }
    printf("\nFim de jogo!\n");

    return 0;
}
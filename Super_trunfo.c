#include <stdio.h> //Biblioteca para as Funções de Entrada e Saida de Dados
int main() {

    //Atributos da carta 1
    char estado1;
    char codigodacarta1[5];
    char nomedacidade1[15];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numerodepontoturistico1;
    float Densidadepopulacional1;
    float pibpercapita1;
    float superpoder1; // Nova variavel para super Poder - nivel Mestre

    //Atributos da carta 2
    char estado2;
    char codigodacarta2[5];
    char nomedacidade2[15];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numerodepontoturistico2;
    float Densidadepopulacional2;
    float pibpercapita2;
    float superpoder2; // Nova variavel para super Poder - nivel Mestre

    //COLETA DE DADOS DA CARTA 1

    printf("Atributos da carta 1 \n");
    printf("Digite o Estado (Uma Letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %s", codigodacarta1);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade1);

    printf("Qual Numero de Habitantes da Cidade? \n");
    scanf(" %lu", &populacao1);

    printf("Qual a Area em Km²? \n");
    scanf(" %f", &area1);

    printf("Qual o PIB da Cidade? \n");
    scanf(" %f", &pib1);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? \n");
    scanf(" %d", &numerodepontoturistico1);

    
    
    //COLETA DE DADOS DA CARTA 2


    printf("Atributos da carta 2 \n");
    printf("Digite o Estado (Uma Letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %s", codigodacarta2);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade2);

    printf("Qual Numero de Habitantes da Cidade? \n");
    scanf(" %lu", &populacao2);

    printf("Qual a Area em Km²? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB da Cidade? \n");
    scanf(" %f", &pib2);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? \n");
    scanf(" %d", &numerodepontoturistico2);

// Calculos dos atributos Densidade populacional e Pib per Capita

    Densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) /(float) populacao1;

    Densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float) populacao2; 

// Calculo do Super Poder - Nivel Mestre

    superpoder1 = (float)populacao1 + area1 + pib1 + (float)numerodepontoturistico1 + pibpercapita1 + (1.0 /Densidadepopulacional1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)numerodepontoturistico2 + pibpercapita2 + (1.0 /Densidadepopulacional2);

    //EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 1
    
    printf("\n carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigodacarta1);
    printf("Nome Da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numeros de Pontos Turisticos: %d\n", numerodepontoturistico1);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional1);
    printf("Pib Per Capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);


    printf("\n");

    //EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 2

    printf("\n carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigodacarta2);
    printf("Nome Da Cidade: %s\n", nomedacidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numeros de Pontos Turisticos: %d\n", numerodepontoturistico2);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional2);
    printf("Pib Per Capita:R$ %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

//Comparação e Resultado da Batalho

    printf("Resultado da Batalha (1 = carta 1 é a vencedora, 0 = Carta 2 é a Vencedora)\n");


//comparação normal (maior carta vence)

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n",pib1 > pib2);
    printf("Pontos Turisticos: %d\n", numerodepontoturistico1 > numerodepontoturistico2);
    printf("PIB Per Capita: %d\n", pibpercapita1 > pibpercapita2);
   
// Regra Especial Para Densidade o Menor Valor Vence
    
    printf("Densidade Populacional: %d\n", Densidadepopulacional1 < Densidadepopulacional2);

// Super Poder

    printf("Super Poder: %d\n", superpoder1 > superpoder2 \n);


    return 0;
}
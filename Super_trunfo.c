#include <stdio.h> //Biblioteca para as Funções de Entrada e Saida de Dados
int main() {

    //Atributos da carta 1
    char estado1;
    char codigodacarta1[5];
    char nomedacidade1[15];
    int populacao1;
    float area1;
    float pib1;
    int numerodepontoturistico1;

    //Atributos da carta 2
    char estado2;
    char codigodacarta2[5];
    char nomedacidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int numerodepontoturistico2;

    //COLETA DE DADOS DA CARTA 1

    printf("Atributos da carta 1 \n");
    printf("Digite o Estado (Uma Letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %s", codigodacarta1);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade1);

    printf("Qual Numero de Habitantes da Cidade? \n");
    scanf(" %i", &populacao1);

    printf("Qual a Area em Km²? \n");
    scanf(" %f", &area1);

    printf("Qual o PIB da Cidade? \n");
    scanf(" %f", &pib1);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? \n");
    scanf(" %i", &numerodepontoturistico1);
    
    //COLETA DE DADOS DA CARTA 2


    printf("Atributos da carta 2 \n");
    printf("Digite o Estado (Uma Letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %s", codigodacarta2);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade2);

    printf("Qual Numero de Habitantes da Cidade? \n");
    scanf(" %i", &populacao2);

    printf("Qual a Area em Km²? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB da Cidade? \n");
    scanf(" %f", &pib2);

    printf("Qual a Quantidade de Pontos Turisticos na Cidade? \n");
    scanf(" %i", &numerodepontoturistico2);


    //EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 1
    

    printf("\n carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigodacarta1);
    printf("Nome Da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %i\n", populacao1);
    printf("Area: %f\n", populacao1);
    printf("PIB: %f\n", pib1);
    printf("Numeros de Pontos Turisticos: %i\n", numerodepontoturistico1);

    printf("\n");

    //EXIBIÇÃO DE DADOS CADASTRADOS DA CARTA 2

    printf("\n carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigodacarta2);
    printf("Nome Da Cidade: %s\n", nomedacidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %f\n", populacao2);
    printf("PIB: %f\n", pib2);
    printf("Numeros de Pontos Turisticos: %i\n", numerodepontoturistico2);

    return 0;










    










}
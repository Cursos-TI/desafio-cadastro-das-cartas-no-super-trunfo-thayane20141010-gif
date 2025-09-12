#include <stdio.h> // Biblioteca de Entrada e Saída de dados

    //Implemetação Recusividade para Torre

void moverTorre(int casas){ 
    if (casas > 0)
    {
        printf("Direita \n");
        moverTorre(casas - 1);
    }
    
}

    //Implemetação Recusividade para Bispo

void moverBispo(int casas){
    if (casas > 0)
    {
       printf("Cima ");
       printf("Direita \n");        
       moverBispo(casas - 1);
    }
    }

    //Implemetação Recusividade para Rainha

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esqueda\n");        
        moverRainha(casas - 1);
    }
    }

int main() {
   
    // Movimento da Torre

    printf("\n--- Movimento da Torre (5 casas para a direita) ---\n");

    moverTorre(5); // Quantidade de movimentação 
    
     // Movimento do Bispo

    printf("\n--- Movimento do Bispo (5 casas na diagonal para cima e à direita) ---\n");

    moverBispo(5);  // Quantidade de movimentação 

    // Movimento da Rainha

    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");

    moverRainha(8); // Quantidade de movimentação 

    // Movimento do Cavalo

     printf("--- Movimento do Cavalo (2 casas para baixo, 1 para a esquerda) ---\n");
         
    for (int i = 0,j = 0; i < 2 || j< 1; ) {
        if (i < 2)
        {
            printf("Baixo\n"); // Imprime "Baixo" duas vezes
            i++;
        } else if (j < 1)
        {
           printf("Esquerda\n"); // Imprime "Esqueda" uma vezes
           j++;
        }
        
        }
    return 0;
}
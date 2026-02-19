#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITENS 10

// ===============================
// Definição da struct Item
// ===============================
typedef struct {
    char nome[30];
    char tipo[20];
    int quantidade;
} Item;

// Vetor que armazenará os itens
Item mochila[MAX_ITENS];

// Variável que controla quantos itens existem na mochila
int totalItens = 0;

// ===============================
// Função para inserir item
// ===============================
void inserirItem() {
    if (totalItens >= MAX_ITENS) {
        printf("\nMochila cheia! Não é possível adicionar mais itens.\n");
        return;
    }

    printf("\n=== Cadastro de Item ===\n");

    printf("Nome do item: ");
    scanf(" %[^\n]", mochila[totalItens].nome);

    printf("Tipo do item (arma, municao, cura...): ");
    scanf(" %[^\n]", mochila[totalItens].tipo);

    printf("Quantidade: ");
    scanf("%d", &mochila[totalItens].quantidade);

    totalItens++;

    printf("\nItem adicionado com sucesso!\n");
}

// ===============================
// Função para remover item
// ===============================
void removerItem() {
    if (totalItens == 0) {
        printf("\nMochila vazia!\n");
        return;
    }

    char nomeBusca[30];
    int encontrado = -1;

    printf("\nDigite o nome do item a remover: ");
    scanf(" %[^\n]", nomeBusca);

    // Busca sequencial
    for (int i = 0; i < totalItens; i++) {
        if (strcmp(mochila[i].nome, nomeBusca) == 0) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("\nItem não encontrado!\n");
    } else {
        // Desloca os elementos para "fechar o buraco"
        for (int i = encontrado; i < totalItens - 1; i++) {
            mochila[i] = mochila[i + 1];
        }

        totalItens--;
        printf("\nItem removido com sucesso!\n");
    }
}

// ===============================
// Função para listar itens
// ===============================
void listarItens() {
    if (totalItens == 0) {
        printf("\nMochila vazia!\n");
        return;
    }

    printf("\n=== Itens na Mochila ===\n");

    for (int i = 0; i < totalItens; i++) {
        printf("\nItem %d\n", i + 1);
        printf("Nome: %s\n", mochila[i].nome);
        printf("Tipo: %s\n", mochila[i].tipo);
        printf("Quantidade: %d\n", mochila[i].quantidade);
    }
}

// ===============================
// Função para buscar item
// ===============================
void buscarItem() {
    if (totalItens == 0) {
        printf("\nMochila vazia!\n");
        return;
    }

    char nomeBusca[30];
    int encontrado = 0;

    printf("\nDigite o nome do item a buscar: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < totalItens; i++) {
        if (strcmp(mochila[i].nome, nomeBusca) == 0) {
            printf("\nItem encontrado!\n");
            printf("Nome: %s\n", mochila[i].nome);
            printf("Tipo: %s\n", mochila[i].tipo);
            printf("Quantidade: %d\n", mochila[i].quantidade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nItem não encontrado.\n");
    }
}

// ===============================
// Função principal (menu)
// ===============================
int main() {
    int opcao;

    do {
        printf("\n=== SISTEMA DE INVENTÁRIO ===\n");
        printf("1 - Inserir Item\n");
        printf("2 - Remover Item\n");
        printf("3 - Listar Itens\n");
        printf("4 - Buscar Item\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirItem();
                listarItens();
                break;
            case 2:
                removerItem();
                listarItens();
                break;
            case 3:
                listarItens();
                break;
            case 4:
                buscarItem();
                break;
            case 0:
                printf("\nEncerrando o sistema...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}

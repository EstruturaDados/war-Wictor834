#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TERRITORIOS 10
#define TAM_STRING 100

// STRUCT correta
struct Territorio {
    char Nome[TAM_STRING];
    char Cor[TAM_STRING];
    int Tropas;
};

// --- Função para limpar buffer corretamente ---
void LimpadorBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    struct Territorio equipes[MAX_TERRITORIOS];
    int Info = 0;     // Quantidade cadastrada
    int opcao;

    do {
        // Menu
        printf("\n===== Começar um novo jogo =======\n");
        printf("1 - Iniciar jogo \n");
        printf("2 - Informações dos territórios cadastrados\n");
        printf("0 - Sair\n");
        printf("Escolha: ");

        scanf("%d", &opcao);
        LimpadorBufferEntrada();

        switch (opcao) {

            case 1:
                printf("==== Cadastro do território ====\n");

                if (Info < MAX_TERRITORIOS) {

                    printf("Digite o nome do território:\n");
                    fgets(equipes[Info].Nome, TAM_STRING, stdin);

                    printf("Digite a cor do território:\n");
                    fgets(equipes[Info].Cor, TAM_STRING, stdin);

                    // Remover \n do fgets
                    equipes[Info].Nome[strcspn(equipes[Info].Nome, "\n")] = '\0';
                    equipes[Info].Cor[strcspn(equipes[Info].Cor, "\n")] = '\0';

                    printf("Digite a quantidade de tropas:\n");
                    scanf("%d", &equipes[Info].Tropas);
                    LimpadorBufferEntrada();

                    Info++; // incrementa territorios

                    printf("Território cadastrado com sucesso!\n");

                } else {
                    printf("Não há mais espaço para cadastrar novos territórios!\n");
                }

                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 2:
                printf("==== Lista de Territórios ====\n\n");

                if (Info == 0) {
                    printf("Nenhum território cadastrado!\n");
                } else {
                    for (int i = 0; i < Info; i++) {
                        printf("==============\n");
                        printf("Território %d\n", i + 1);
                        printf("Nome: %s\n", equipes[i].Nome);
                        printf("Cor: %s\n", equipes[i].Cor);
                        printf("Tropas: %d\n", equipes[i].Tropas);
                    }
                    printf("==============\n");
                }

                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 0:
                printf("\nSaindo do jogo...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                printf("\nPressione Enter para continuar...");
                getchar();
                break;
        }

    } while (opcao != 0);

    return 0;
}

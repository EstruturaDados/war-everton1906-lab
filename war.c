#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5
#define TAM_NOME 50
#define TAM_COR 20

// Definição da struct
typedef struct {
    char nome[TAM_NOME];
    char corExercito[TAM_COR];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[QTD_TERRITORIOS];

    printf("=== Cadastro Inicial dos Territórios ===\n");

    // Cadastro dos territórios
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, TAM_NOME, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // Remove \n

        printf("Cor do Exército: ");
        fgets(territorios[i].corExercito, TAM_COR, stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        printf("Número de Tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // limpa o buffer
    }

    // Exibição do estado do mapa
    printf("\n=== Estado Atual do Mapa ===\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Território %d\n", i + 1);
        printf(" Nome: %s\n", territorios[i].nome);
        printf(" Exército: %s\n", territorios[i].corExercito);
        printf(" Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    char nomes[3][50]; // Matriz para armazenar 3 nomes de até 49 caracteres

    printf("Digite 3 nomes:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
 // Lê uma string do usuário
    }

    printf("\nNomes inseridos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}

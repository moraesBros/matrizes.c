#include <stdio.h>
#include <string.h> // Biblioteca necessária para strcmp()
/* 0 se as strings forem iguais.
   Um valor negativo se a primeira string for menor que a segunda.
   Um valor positivo se a primeira string for maior que a segunda.
   e ordem alfabética.
   */
int main() {
    char nome1[50], nome2[50];

    printf("Digite o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Removendo o '\n' da entrada

    printf("Digite o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Removendo o '\n' da entrada

    // Comparação das strings
    int resultado = strcmp(nome1, nome2);

    if (resultado == 0) {
        printf("Os nomes são iguais.\n");
    } else if (resultado < 0) {
        printf("'%s' vem antes de '%s' alfabeticamente.\n", nome1, nome2);
    } else {
        printf("'%s' vem depois de '%s' alfabeticamente.\n", nome1, nome2);
    }

    return 0;
}

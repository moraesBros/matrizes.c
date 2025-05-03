#include <stdio.h>

int main() {
    int notas[5], i, soma = 0; // Inicializando soma diretamente
    float media; // Variável para armazenar a média

    // Coletando as notas dos alunos
    for(i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1); // Exibe numeração correta dos alunos
        scanf("%d", &notas[i]);
    }

    // Calculando a soma das notas
    for(i = 0; i < 5; i++) { 
        soma += notas[i]; 
    }

    // Calculando e exibindo a média corretamente
    media = (float)soma / 5;
    printf("\nSoma das notas: %d\n", soma);
    printf("Média das notas: %.2f\n", media);

    return 0;
}

#include <stdio.h>
#include <string.h> // Biblioteca necessária para strcat()

int main() {
    char saudacao[50] = "Olá, "; // String inicial com espaço suficiente
    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê o nome do usuário com segurança

    // Removendo o caractere de nova linha (\n) que fgets adiciona
    nome[strcspn(nome, "\n")] = '\0';

    strcat(saudacao, nome); // Concatena o nome à saudação
    strcat(saudacao, "! Bem-vindo!"); // Adiciona uma mensagem final

    printf("%s\n", saudacao); // Exibe a saudação completa

    return 0;
}

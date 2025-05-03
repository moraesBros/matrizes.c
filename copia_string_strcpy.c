#include <stdio.h>
#include <string.h> // Biblioteca necessária para strcpy()

int main() {
    char origem[] = "Copilot";  // String de origem
    char destino[20]; // Array que receberá a cópia

    strcpy(destino, origem); // Copia 'origem' para 'destino'

    printf("String original: %s\n", origem);
    printf("String copiada: %s\n", destino);

    return 0;
}

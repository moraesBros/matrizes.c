#include <stdio.h>
#include <string.h> // Biblioteca necessária para strcpy()

int main() {
    char origem[] = "Copilot";  // String de origem
    char destino[20]; // Array que receberá a cópia


strncpy(destino, origem, sizeof(destino) - 1);
destino[sizeof(destino) - 1] = '\0'; // Garantindo que a string está terminada corretamente

    printf("String original: %s\n", origem);
    printf("String copiada: %s\n", destino);

    return 0;
}

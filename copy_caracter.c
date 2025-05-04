#include <stdio.h>
#include <string.h>

int main() {
    char t[10], s[10];
    strcpy(s, "abobora"); // Copia "abobora" para s
    
    char *ps = s;
    char *pt = t;

    while ((*pt++ = *ps++)); // Copia a string corretamente

    printf("%s\n", t); // Imprime a cópia
    return 0;
}

#include <stdio.h>

int main() {
    static char re[] = "lagarto"; // Especificando o tipo correto para o array estático

    puts(re);         // Exibe a string armazenada em re
    puts(&re[0]);     // Também exibe a mesma string, pois &re[0] aponta para seu início
    putchar('\n');    // Corrigindo o argumento de putchar para exibir uma nova linha corretamente

    return 0;
}

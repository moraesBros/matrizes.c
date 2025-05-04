#include <stdio.h>

int main() {
    int i=0;
    char t[10];
    static char s[] ="abobora";
    while(t[i]=s[i])i++;
    printf("%s\n", t);
    return 0;
}

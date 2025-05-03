#include <stdio.h>

int main() {
    int i;
    static int x[10]={0,1,2,3,4,5,6,7,8,9};

    for(i=0; i<10;i++)
    printf("%d\n", x[i]);
    
    return 0;
}

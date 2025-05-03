#include <stdio.h>

int main() {
    int x[10][10];
    int t,p = 0;
    for(t=0;t<10;t++, p++){
        x[t][p]=t*p;
        printf("%d\n", x [t][p]);
    }
}

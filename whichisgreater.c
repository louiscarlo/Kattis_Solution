#include <stdio.h>

void cek(int *a, int *b) {
    if(*a>*b) {
        printf("1");
    }
    else{
        printf("0");
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    cek(&a,&b);
    return 0;
}
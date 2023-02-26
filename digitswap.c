#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    if(a%10!=0) {
    if(a>10 && a<100) {
        b=a%10;
        printf("%d",b);
        a-=b;
        printf("%d",a/10);
    }
    } 
    else {
        exit(0);
    }
}
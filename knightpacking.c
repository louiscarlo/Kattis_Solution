#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000) {
        if(n%2==0) {
            printf("second");
        }
        else{
            printf("first");
        }
    }
    else{
        exit(0);
    }
    return 0;
}
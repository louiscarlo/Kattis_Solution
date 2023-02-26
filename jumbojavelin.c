#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,l;
    int total=0;
    scanf("%d",&n);
    if(n>1 && n<=100) {
        for(int i=0;i<n;i++) {
            scanf("%d",&l);
            if(l>=1 && l<=50) {
                total+=l;
            }
            else {
                break;
            }
    }
    }
    else {
        exit(0);
    }
    printf("%d",total-(n-1));

}
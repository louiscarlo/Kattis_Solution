#include <stdio.h>
int main() {
    int n,k,o;
    scanf("%d",&n);
    if(n>=1 && n<=20) {
        for(int a=1;a<=n;a++) {
            int hasil=0;
            scanf("%d",&k);
            for(int b=1;b<=k;b++) {
                scanf("%d",&o);
                hasil+=o;
            }
            printf("%d\n",hasil-k+1);
        }
    }
}
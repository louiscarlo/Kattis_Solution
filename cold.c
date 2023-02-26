#include <stdio.h>
int main() {
    int n,t;
    int c=0;
    scanf("%d",&n);
    if(n>=1 && n<=100) {
        for(int a=1;a<=n;a++) {
            scanf("%d",&t);
            if(t>=-1000000 && t<=1000000) {
            if(t<0) {
                c++;
            }
        }
       
        }
         printf("%d",c);
    }
}
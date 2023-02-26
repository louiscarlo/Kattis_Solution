#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,x;
    scanf("%d",&n);
    if(n>=1 && n<=20) {
        for(int a=1;a<=n;a++) {
            scanf("%d",&x);
            if(x%2==0) {
                printf("%d is even\n",x);
            }
            else{
                printf("%d is odd\n",x);
            }
            // if(x>=-10 && x<=10) {
            // }
            // else {
            //     exit(0);
            // }
        }
    }
    else {
        exit(0);
    } 
   return 0;
}
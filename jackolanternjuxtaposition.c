#include <stdio.h>
int main() {
    int n,t,m,a;
    
    
     scanf("%d",&n);
        if(n>0 && n<=1500) {
            scanf("%d",&t);
            if(t>0 && t<=1500) {
                scanf("%d",&m);
                if(m>0 && m<=1500) {
                    a=n*t*m;
                printf("%d",a);
                }
                else{
                    exit(0);
                }

            }
            else {
                exit(0);
            }
        }
        else{
            exit(0);
        }
    return 0;
}
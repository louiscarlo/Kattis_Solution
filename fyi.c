#include <stdio.h>
#include <stdlib.h>
int main() {
                int a;
                scanf("%d",&a);
            if(a>=1000000 && a<=9999999) {
                if(a>=5550000 && a<5560000) {
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            else {
                exit(0);
            }

            return 0;
}
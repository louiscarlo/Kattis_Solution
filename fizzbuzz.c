#include <stdio.h>
int main() {
    int x,y,n;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&n);
    if(x>=1 && x<y && y<=n && n<=100) {
        for(int a=1;a<=n;a++) {
            if(a%x==0 && a%y==0) {
                printf("FizzBuzz \n");
            }
            else if(a%x==0) {
                printf("Fizz \n");
            }
            else if(a%y==0) {
                printf("Buzz \n");
            }
            else{
                printf("%d \n",a);
            }
        }
    }
}
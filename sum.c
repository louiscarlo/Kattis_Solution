#include <stdio.h>
int main() {

int jumlah=0;
    int n,c,a;
    scanf("%d",&n);
    if(n>=2 && n<=10) {
        for(n;n>=1 && n<=10;n--) {
            scanf("%d",&c);
            jumlah+=c;
        }
        printf("%d",jumlah);
    }



    return 0;
}

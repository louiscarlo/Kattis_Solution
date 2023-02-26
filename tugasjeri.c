#include <stdio.h>
int main() {
    int input;
    int num=1;
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%d",&input);

    for(int i=0;i<input;i++) {
        for(int j=0;j<=i;j++) {
            printf("   ");
        }
        for(int j=(input*2)-1;j<1+1;j--) {
            if(num<10) {
                printf(" ");
            }
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
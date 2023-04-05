#include <stdio.h>
int main() {
    int input;
    scanf("%d",&input);
    for(int i=0; i<input; i++) {
        for(int j=0; j<i; j++) {
            printf("  ");
        }
        for(int j=0; j<input+2; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    int bantuan = 0;
    int a = input;
    for(int i=0; i<input; i++) {
        for(int j=0; j<=i; j++) {
            printf("_");
        }
        for(int j=a; j>0; j--) {
            printf("X");
        }
        for(int j=a-1; j>0; j--) {
            printf("X");
        }
        for(int j=0; j<=i; j++) {
            printf("_");
        }
        a--;
        // for(int j=input*2-1; j>i+i; j--) {
        //     printf("X");
        // }
        printf("\n");
    }

}
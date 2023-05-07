#include <stdio.h>
#include <conio.h>
int main() {
    int input;
    printf("Masukkan Inputan : ");
    scanf("%d",&input);
    getch();
    if(input>=2) {
        int tampung = input;
        printf("\n");
        for(int i=0; i<input; i++) {
            int a = 0;
            printf("Baris ke-%d\n",i+1);
            for(int j=0; j<tampung; j++) {
                for(int k=0; k<=j; k++) {
                    if(k==j) {
                        printf("*");
                    }
                    else {
                        printf("* ");
                    }    
                }
                for(a; a<tampung; a++) {
                    printf("\t");
                }
                printf("\n");
            }
            tampung--;
        }
    }
    else {
        printf("Maaf, Inputan minimal harus 2 atau lebih\n");
    }
    return 0;
}
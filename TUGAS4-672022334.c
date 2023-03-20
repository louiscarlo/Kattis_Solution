#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void hitung(char x[]){

    int jumlah_spasi = 0;
    int jumlah_karakter = strlen(x);

        printf("\nTotal Karakter pada kalimat\t: %d", jumlah_karakter);
        for(int i = 0; i < strlen(x); i++){
            if( x[i] == ' '){
            jumlah_spasi+=1;
            }
        }
        printf("\nTotal spasi pada kalimat\t: %d\n", jumlah_spasi);
}

void main(){

    char kalimat[MAX];
        printf("Titus Candra Kusuma Perdana P || 672022177\n");
        printf("Muhammad Rangga Dinata        || 672022287\n");
        printf("Louis Carlo Parulian Pasaribu || 672022334\n\n");
        printf("Masukkan kalimat : ");
        scanf(" %[^\n]s", kalimat);
        hitung(kalimat);

}

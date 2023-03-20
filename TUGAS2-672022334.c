#include <stdio.h>

void main(){
    printf("Titus Candra Kusuma Perdana P || 672022177\n");
    printf("Muhammad Rangga Dinata        || 672022287\n");
    printf("Louis Carlo Parulian Pasaribu || 672022334\n");
    int baris,kolom;
    int jumlah=0;
    printf("Masukkan jumlah baris\t= ");
    scanf(" %d", &baris);
    printf("Masukkan jumlah kolom\t= ");
    scanf(" %d", &kolom);

    int mx[baris][kolom];

    printf("\n");

    for(int i = 0; i < baris; i++){
        for(int j=0; j < kolom; j++){
            printf("Isi Matriks [%d][%d]\t= ",i+1,j+1);
            scanf(" %d", &mx[i][j]);
            jumlah += mx[i][j];
        }
        printf("\n");
    }

    int max = 0;

    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            printf("%d\t", mx[i][j]);
            if(max<mx[i][j]){
                max = mx[i][j];
            }
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < baris; i++){
        int hasilBaris=0;
        for(int j=0; j < kolom; j++){
               hasilBaris += mx[i][j];
        }
        printf("Jumlah Baris %d\t: %d\n", i+1,hasilBaris);
    }

    for(int i = 0; i < kolom; i++){
        int hasilKolom=0;
        for(int j = 0; j < baris; j++){
            hasilKolom += mx[j][i];
        }
        printf("Jumlah Kolom %d\t: %d\n", i+1, hasilKolom);
    }

    printf("Jumlah Semua\t: %d\n", jumlah);
    printf("Nilai Tertinggi\t: %d\n", max);
}

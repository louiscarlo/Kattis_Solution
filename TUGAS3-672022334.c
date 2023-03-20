#include <stdio.h>
#include <stdlib.h>


int jumlah;

void balik(int arr[]){

    int balik[jumlah];

        for (int i = 0; i < jumlah; i++){
            balik[i] = arr[jumlah-i-1];
        }
        printf("\nArray yang sudah dibalik\t: ");

        for(int i = 0; i < jumlah; i++){
            printf("%d ", balik[i]);
        }
}
void main(){

        printf("Titus Candra Kusuma Perdana P || 672022177\n");
        printf("Muhammad Rangga Dinata        || 672022287\n");
        printf("Louis Carlo Parulian Pasaribu || 672022334\n");

        printf("\nMasukkan Jumlah Elemen Array: ");
        scanf("%d", &jumlah);

    int arr[jumlah];

        for (int i=0; i<jumlah; i++){
            printf("Angka Ke-%d\t: ", i+1);
            scanf("%d", &arr[i]);
        }
        printf("\nAngka yang dimasukkan\t\t: ");

        for (int i=0; i<jumlah; i++){
            printf("%d ", arr[i]);
        }

    balik(arr);
}

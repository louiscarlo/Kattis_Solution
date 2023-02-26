#include <stdio.h>
int main() {
    int baris,kolom;
    printf("Masukkan Panjang Matriks : ");
    scanf("%d",&baris);
    printf("Masukkan Lebar Matriks : ");
    scanf("%d",&kolom);
    float matriks[baris][kolom];
    float total=0;

    for(int i=0;i<baris;i++) {
        for(int j=0;j<kolom;j++) {
            printf("%d %d ",i+1,j+1);
            float input;
            scanf("%f",&input);
            matriks[i][j]=input;
            total+=input;
        }
    }
    printf("Matriks \n");
    for(int i=0;i<baris;i++) {
        for(int j=0;j<kolom;j++) {
            // printf("%d %d ",i+1,j+1);
            printf("%.0f ",matriks[i][j]);
        }
        printf("\n \n");
    }

    for(int i=0;i<baris;i++) {
        for(int j=0;j<kolom;j++) {
            // printf("%d %d ",i+1,j+1);
            int matriksItem = (int) matriks[i][j];
            if(matriksItem%2==0) {
                printf("0\t");
            } else {
                printf("%.0f\t",matriks[i][j]);
            }
        }
        printf("\n \n");
    }
    printf("new section \n");
    for(int i=0;i<baris;i++) {
        for(int j=0;j<kolom;j++) {
            // printf("%d %d ",i+1,j+1);
            int matriksItem = (int) matriks[i][j];
            if(matriksItem%5==0) {
                printf("L\t");
            } else {
                printf("%.0f\t",matriks[i][j]);
            }
        }
        printf("\n \n");
    }
    printf(" \n \n ");
    for(int i=0;i<kolom;i++) {
        for(int j=0;j<baris;j++) {
            // printf("%d %d ",i+1,j+1);
            printf("%.0f ",matriks[j][i]);
        }
        printf("\n \n");
    }
    
    printf("Jumlah : %.2f \n",total);
    printf("rata2 : %.2f \n",total/(baris*kolom));


}
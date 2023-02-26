#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kapital();
void vokal();
void hurufAkhir();
void menuString() {
    int menu;
    printf("\t\tMENU STRING\n");
    printf("1. Kapital\n");
    printf("2. Huruf Vokal\n");
    printf("3. Huruf Akhir\n");
    printf("4. Huruf Angka\n");
    printf("5. Polindrome\n");
    printf("6. Exit\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d",&menu);
    system("pause");
    switch(menu) {
    case 1: //Kapital
        kapital();
        break;

    case 2: //vokal
        vokal();
        break;
    
    case 3: //huruf akhir
        hurufAkhir();
        break;
    }
}

void kapital() {
    system("cls");
    int kasus;
    printf("Masukkan Jumlah Kasus : ");
    scanf("%d",&kasus);
    char kalimat[kasus][999];
    for(int i=1;i<=kasus;i++) {
        printf("Masukkan Kalimat ke-%d : ",i);
        scanf(" %[^\n]",&kalimat[i-1]);
    }
    for(int j=0;j<kasus;j++) {
        for(int i=0;kalimat[j][i]!='\0';i++) {
            if(kalimat[j][i]>=65 && kalimat[j][i]<=90) {
                printf("%c",kalimat[j][i]);
            }
            else if(kalimat[j][i]>=97 && kalimat[j][i]<=122) {
                printf("%c",kalimat[j][i]-32);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void vokal() {
    system("cls");
    int kasus;
    printf("Masukkan Jumlah Kasus : ");
    scanf("%d",&kasus);
    char kalimat[kasus][999];
    for(int i=1;i<=kasus;i++) {
        printf("Masukkan Kalimat ke-%d : ",i);
        scanf(" %[^\n]",&kalimat[i-1]);
    }
    for(int i=0;i<kasus;i++) {
        int total=0;
        for(int j=0;kalimat[i][j]!='\0';j++) {
            if(kalimat[i][j]=='a' || kalimat[i][j]=='i' || kalimat[i][j]=='u' || kalimat[i][j]=='e' || kalimat[i][j]=='o' || 
                kalimat[i][j]=='A' || kalimat[i][j]=='I' || kalimat[i][j]=='U' || kalimat[i][j]=='E' || kalimat[i][j]=='O') {
                total++;            
            }
        }
        printf("%d\n",total);
    }
}

void hurufAkhir() {
    system("cls");
    int kasus;
    printf("Masukkan Jumlah Kasus : ");
    scanf("%d",&kasus);
    char kalimat[kasus][999];
    for(int i=1;i<=kasus;i++) {
        printf("Masukkan Kalimat ke-%d : ",i);
        scanf(" %[^\n]",&kalimat[i-1]);
    }
    for(int i=0;i<kasus;i++) {
        for(int j=0;kalimat[i][j]!='\0';j++) {
            // printf("j=%d,char = %c\n",j+1, kalimat[i][j]-32);
            if(kalimat[i][j+1]==' ' || kalimat[i][j+1]=='\0') {
                printf("%c",kalimat[i][j]-32);
            }
            else {
                printf("%c",kalimat[i][j]);    
            }
        }
        printf("\n");
    }

}

int main()
{
    menuString();
    return 0;
}

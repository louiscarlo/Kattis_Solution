#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void inputData();
void tampilData();
int count=0;
int kode[300],harga[300];
char kategori[350][999];
char nama[350][999];
void swalayan()
{
    int menu;
    do
    {
        printf("\t\tSWALAYAN\n");
        printf("1. Input Data\n");
        printf("2. Daftar Barang\n");
        printf("3. Keluar\n");
        printf("Pilihan : ");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("pause");
            inputData();
            break;
        case 2: //daftar barang
            system("pause");
            system("cls");
            tampilData();
            break;

        case 3:
            exit(0);
            break;
        default:
            printf("Pilihan Tidak Tersedia\n");
        }
        printf("Tekan Enter Untuk Lanjut . . .");
        getch();
        system("cls");
    }
    while(menu!=3);
}

void inputData()
{
    int jumlahBarang;
    FILE *fptr= fopen("data_louis.txt", "a");
    system("cls");
    printf("Masukkan Jumlah Barang yang Ingin diinput : ");
    scanf(" %d",&jumlahBarang);
    if(count==0) {
        for(int i=1; i<=jumlahBarang; i++)
        {
            printf("BARANG KE-%d\n",i);
            printf("Kode : ");
            scanf(" %d",&kode[i-1]);
            printf("Kategori : ");
            scanf(" %[^\n]",&kategori[i-1]);
            printf("NAMA : ");
            scanf(" %[^\n]",&nama[i-1]);
            printf("Harga : ");
            scanf(" %d",&harga[i-1]);
            printf("\n");

        }


    }
    else{
        for(int i=1; i<=jumlahBarang; i++)
        {
            printf("BARANG KE-%d\n",count+i);
            printf("Kode : ");
            scanf(" %d",&kode[count+i-1]);
            printf("Kategori : ");
            scanf(" %[^\n]",&kategori[count+i-1]);
            printf("NAMA : ");
            scanf(" %[^\n]",&nama[count+i-1]);
            printf("Harga : ");
            scanf(" %d",&harga[count+i-1]);
            printf("\n");
        }
    }
    count+=jumlahBarang;
    for(int i=0; i<count;i++){
        fprintf(fptr,"\t");
        fprintf(fptr,"\t%d",kode[i]);
        fprintf(fptr,"\t%s",kategori[i]);
        fprintf(fptr,"\t\t%s",nama[i]);
        fprintf(fptr,"\t\t%d\n",harga[i]);
    }
    fclose(fptr);
    printf("Data Anda Telah Berhasil Disimpan\n");
}
void tampilData(){
    FILE* ptr;
    char ch;
    ptr = fopen("data_louis.txt", "r");
    printf("\t\t================= DATA BARANG =================\n");
    printf("\t\t===============================================\n");
    printf("\t\tKODE       KATEGORI       NAMA           HARGA\n");
    printf("\t\t===============================================\n");
    if (NULL == ptr) {
        printf("\t\tMaaf Data Anda Kosong\n");
    }
    else {

        while (!feof(ptr)) {
            ch = fgetc(ptr);
            printf("%c", ch);
        }
    }
    fclose(ptr);
}
int main()
{
    swalayan();
    return 0;
}

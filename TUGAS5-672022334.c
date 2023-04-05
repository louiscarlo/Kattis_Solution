#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct kodeFilm{
    int kode;
    char kategoriFilm[256];
    char negara[256];
};
struct film{
    char judulFilm[256];
    char pemainUtama[256];
    int tahunProduksi;
    struct kodeFilm code;
}Film[MAX];

int hitung = 0;
void isiData() {
    int input;
    system("pause");
    system("cls");
    printf("Masukkan Jumlah Data Film Yang Ingin Diinput : ");
    scanf("%d",&input);
    if(input+hitung>=1 && input+hitung<=10) {
        printf("\t\tSilahkan Isi Data Film Berikut Ini\n");
        if(hitung==0) {
            for(int i=0;i<input;i++) {
                printf("Film ke-%d\n",i+1);
                printf("Judul Film\t: ");
                scanf(" %[^\n]",&Film[i].judulFilm);
                printf("Pemain Utama\t: ");
                scanf(" %[^\n]",&Film[i].pemainUtama);
                printf("Tahun Produksi\t: ");
                scanf("%d",&Film[i].tahunProduksi);
                printf("Kode Film\t: ");
                scanf("%d",&Film[i].code.kode);
                printf("Kategori Film\t: ");
                scanf(" %[^\n]",&Film[i].code.kategoriFilm);
                printf("Negara Film\t: ");
                scanf(" %[^\n]",&Film[i].code.negara);
                printf("\n");
            }
        }
        else {
            for(int i=0;i<input;i++) {
                printf("Film ke-%d\n",i+1+hitung);
                printf("Judul Film\t: ");
                scanf(" %[^\n]",&Film[i+hitung].judulFilm);
                printf("Pemain Utama\t: ");
                scanf(" %[^\n]",&Film[i+hitung].pemainUtama);
                printf("Tahun Produksi\t: ");
                scanf("%d",&Film[i+hitung].tahunProduksi);
                printf("Kode Film\t: ");
                scanf("%d",&Film[i+hitung].code.kode);
                printf("Kategori Film\t: ");
                scanf(" %[^\n]",&Film[i+hitung].code.kategoriFilm);
                printf("Negara Film\t: ");
                scanf(" %[^\n]",&Film[i+hitung].code.negara);
                printf("\n");
            }
        }
        printf("Data Berhasil Diinput..\n");
        hitung+=input;
    }
    else {
        printf("Maaf Inputan Anda Salah\n");
    }
}

void tampilData() {
    system("pause");
    system("cls");
    printf("\t\tTampilan Data Film\n");
    if(hitung==0) {
        printf("Data Film Saat Ini Kosong\n");
    }
    else {
        for(int i=0;i<hitung;i++) {
            printf("Film ke-%d\n",i+1);
            printf("Judul Film\t: %s\n",Film[i].judulFilm);
            printf("Pemain Utama\t: %s\n",Film[i].pemainUtama);
            printf("Tahun produksi\t: %d\n",Film[i].tahunProduksi);
            printf("Kode Film\t: %d\n",Film[i].code.kode);
            printf("Kategori Film\t: %s\n",Film[i].code.kategoriFilm);
            printf("Negara Film\t: %s\n",Film[i].code.negara);
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int input;
    do{
        printf("Author\n");
        printf("Louis Carlo Parulian Pasaribu || 672022334\n");
        printf("Titus Candra Kusuma Perdana P || 672022177\n");
        printf("\t\tMenu Pendataan dan Tampilan Data Film\n");
        printf("1. Input Data Film\n");
        printf("2. Tampilan Data Film\n");
        printf("3. Exit\n");
        printf("Masukkan Inputan : ");
        scanf("%d",&input);
        switch(input) {
        case 1: 
            isiData();
            break;
        case 2:
            tampilData();
            break;
        case 3:
            exit(0);
            break;
        default: printf("Maaf Inputan Anda Salah\n");
        }
        printf("\nTekan Enter Untuk Kembali ke Menu Utama!!");
        printf("\n");
        getch();
        system("cls");
    }
    while(input!=3);
    return 0;
}
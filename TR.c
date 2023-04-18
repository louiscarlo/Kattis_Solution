#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct pinjam{
    char nama[50];
    int nim;
    char judulBuku[50];
    int kode;
    int waktu;
    struct pinjam *next;
}*prev, *temp, *head;
int hitung = 0;
void tambahData() {
    system("cls");
    int input;
    printf("Selamat Datang di Menu Peminjaman Buku Ini\n\n");
    printf("Berapakah Buku yang Ingin Anda Pinjam? ");
    scanf("%d",&input); 
    printf("\nSilahkan Isikan Data di Bawah Ini\n\n");
    for(int i=0; i<input; i++) {
        temp = (struct pinjam*) malloc(sizeof(struct pinjam));
        printf("Buku ke-%d\n",i+hitung+1);
        printf("Nama Peminjam\t\t\t: ");
        scanf(" %[^\n]s",&temp -> nama);
        printf("NIM\t\t\t\t: ");
        scanf(" %d",&temp -> nim);
        printf("Judul Buku\t\t\t: ");
        scanf(" %[^\n]s",&temp -> judulBuku);
        printf("Kode Buku\t\t\t: ");
        scanf(" %d",&temp -> kode);
        printf("Waktu Peminjaman [Dalam Hari]\t: ");
        scanf(" %d",&temp -> waktu);
        printf("\n");
        if(head==NULL) {
            head = temp;
            prev = temp;
        }
        else {
            prev -> next = temp;
            prev = temp;
        }
        prev -> next = NULL;
    }
    printf("\nData Buku yang Ingin Anda Pinjam Sudah Berhasil Diinput\n");
    hitung+=input;
}

void lihatData() {
    system("cls");
    if(head==NULL) {
        printf("Maaf Belum Ada Data yang Diisikan\n");
        printf("\nSilahkan Isi Terlebih Dahulu Data Buku yang Ingin Diinputkan\n\n");
    }
    else {
        printf("Berikut Data Buku yang Telah Diinputkan\n\n");
        temp = head;
        int i=1;
        while(temp!=NULL) {
            printf("Data buku ke-%d\n",i);
            printf("Nama Peminjam\t\t\t: %s\n",temp -> nama);
            printf("NIM\t\t\t\t: %d\n",temp -> nim);
            printf("Judul Buku\t\t\t: %s\n",temp -> judulBuku);
            printf("Kode Buku\t\t\t: %d\n",temp -> kode);
            printf("Waktu Peminjaman [Dalam Hari]\t: %d\n\n",temp -> waktu);
            i++;
            temp = temp -> next;
        }
    }
}

void menuUtama() {
    int input;
    do{
    printf("\t\t\t\t============================================================================\n");
    printf("\t\t\t\t\t\tMenu Peminjaman Buku Perpustakaan Ngatno\n");
    printf("\t\t\t\t============================================================================\n");
    printf("1. Tambah Data Peminjaman\n");
    printf("2. Lihat Data Peminjaman\n");
    printf("3. Edit Data Peminjaman\n");
    printf("4. Hapus Data Peminjaman\n");
    printf("5. Keluar\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",&input);
    getch();
    switch(input) {
        case 1: 
            tambahData();
            break;
        case 2:
            lihatData();
            break;
        case 3: 
            break;
        case 4:
            break;
        case 5:
            exit(0);
            break;
        default: printf("\nMaaf Inputan Anda Salah\n\n");
            break;
    }
    printf("\nTekan Enter Untuk Kembali Ke Menu Utama..");
    getch();
    system("cls");
    } while(input!=5);
}

int main() {
    char username[20],password[5];
    int lanjut =0, ulang = 0;
    for(int i=0; i<=100; i++) {
        printf("Sedang Loading %d %",i);
        system("cls");
    }
    printf("\t\t==================================================\n");
    printf("\t\t\t\tPERPUSTAKAAN NGATNO\n");
    printf("\t\t==================================================\n\n");
    printf("\t\t\tSelamat Datang di Perpustakaan Ini\n");
    for(int i=0; i<4; i++) {
        printf("\t\tSilahkan Masukkan Username dan Password di Bawah Ini\n\n");
        printf("Username\t: ");
        scanf(" %[^\n]s",&username);
        printf("\nPassword\t: ");
        scanf(" %[^\n]s",&password);
        printf("\n");

        if(strcmp(username,"Ngatno")==0 && strcmp(password,"123")==0) {
            break;
        }
        else{
            lanjut++;
            ulang++;
            if(ulang<=3) {
                printf("\nMaaf Username atau Password Anda Salah,Silahkan Coba Lagi\n\n");
            }
            else {
                break;
            }
        }
    }
    
    if(lanjut<=3) {
        printf("\nAnda Berhasil Masuk..");
        getch();
        system("cls");
        menuUtama();
    }
    else{
        printf("\nMaaf Anda Telah Gagal dan Tidak Dapat Mencoba Lagi");
    }
    return 0;
}
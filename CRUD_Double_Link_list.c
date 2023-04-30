#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Pinjam{
    char nama[50];
    int nim;
    char judulBuku[70];
    char kode[20];
    int waktu;
    int saldo;
};
int hitung = 0;
struct Frame{
    struct Pinjam pinjam;
    struct Frame *next;
    struct Frame *prev;
}*head,*current,*temp;
void delete();
void cari();
void tambahData() {
    int input;
    system("cls");
    printf("\t\t\t\t\tSelamat Datang di Menu Peminjaman Buku Perpustakaan Carlo\n");
    printf("\n\t\t\t\t\tBerapakah Buku yang Ingin Anda Pinjam? [Saldo Peminjaman Buku Sehari = 2000] ");
    scanf("%d",&input);
    if(input>=1) {
        printf("\n\t\t\t\t\tSilahkan Isikan Data di Bawah Ini\n\n");
        for(int i=0; i<input; i++) {
            temp = (struct Frame*) malloc(sizeof(struct Frame));
            printf("\t\t\t\t\tBuku ke-%d\n",i+hitung+1);
            printf("\t\t\t\t\tNama Peminjam\t\t\t: ");
            scanf(" %[^\n]s",&temp -> pinjam.nama);
            printf("\t\t\t\t\tNIM\t\t\t\t: ");
            scanf(" %d",&temp -> pinjam.nim);
            printf("\t\t\t\t\tJudul Buku\t\t\t: ");
            scanf(" %[^\n]s",&temp -> pinjam.judulBuku);
            printf("\t\t\t\t\tKode Buku\t\t\t: ");
            scanf(" %[^\n]s",&temp -> pinjam.kode);
            printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: ");
            scanf(" %d",&temp -> pinjam.waktu);
            temp ->pinjam.saldo = temp ->pinjam.waktu * 2000;
            printf("\n");
            if(head==NULL) {
                head = temp;
                current = temp;
            }
            else {
                current ->next = temp;
                temp ->prev = current;
                current = temp;
            }
            current ->next = NULL;
        }
        hitung+=input;
        printf("\n\t\t\t\t\tData Buku yang Ingin Anda Pinjam Sudah Berhasil Diinput\n");
    }
    else {
        printf("\n\t\t\t\t\tMaaf Buku yang Bisa Anda Pinjam Mininal 1 atau Lebih Dari 1\n");
    }
}

void cetak() {
    system("cls");
    if(head==NULL) {
        printf("\t\t\t\t\tMaaf Belum Ada Data yang Diisikan\n");
        printf("\n\t\t\t\t\tSilahkan Isi Terlebih Dahulu Data Buku yang Ingin Diinputkan\n\n");
    }
    else {
        printf("\t\t\t\t\tBerikut Data Buku yang Telah Diinputkan\n\n");
        temp = head;
        int i=1;
        while(temp!=NULL) {
            printf("\t\t\t\t\tData buku ke-%d\n",i);
            printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
            printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
            printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
            printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
            printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
            printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
            i++;
            temp = temp -> next;
        }
    }
}

void cariNama() {
    system("cls");
    char lanjut;
    char Nama[50];
    char namaBaru[50];
    int nimBaru;
    char judulBaru[70];
    char kodeBaru[20];
    int waktuBaru;
    printf("\t\t\t\t\tSilahkan Masukkan Nama yang Ingin Anda Edit Datanya\n");
    printf("\t\t\t\t\tNama : ");
    scanf(" %[^\n]s",&Nama);
    temp = head;
    while(temp!=NULL) {
        if(strcmp(Nama,temp ->pinjam.nama)==0) {
            break;
        }
        temp = temp ->next;
    }
    if(temp==NULL) {
        printf("\n\t\t\t\t\tMaaf, Data Tidak Ditemukan\n");
    }
    else {
        printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Edit\n");
        printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
        printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
        printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
        printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
        printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
        printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
        printf("\t\t\t\t\tSilahkan Edit Data\n");
        printf("\t\t\t\t\tNama Peminjam\t\t\t: ");
        scanf(" %[^\n]s",&namaBaru);
        strcpy(temp ->pinjam.nama,namaBaru);
        printf("\t\t\t\t\tNIM\t\t\t\t: ");
        scanf(" %d",&nimBaru);
        temp ->pinjam.nim = nimBaru;
        printf("\t\t\t\t\tJudul Buku\t\t\t: ");
        scanf(" %[^\n]s",&judulBaru);
        strcpy(temp ->pinjam.judulBuku,judulBaru);
        printf("\t\t\t\t\tKode Buku\t\t\t: ");
        scanf(" %[^\n]s",&kodeBaru);
        strcpy(temp ->pinjam.kode,kodeBaru);
        printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: ");
        scanf(" %d",&waktuBaru);
        temp ->pinjam.waktu = waktuBaru;
        temp ->pinjam.saldo = waktuBaru * 2000;
        printf("\n\t\t\t\t\tData Sudah Berhasil Diedit\n");
    }
    printf("\n\t\t\t\t\tApakah Anda Ingin Mengedit Data Lagi? [Y/N] ");
    scanf(" %c",&lanjut);
    printf("\t\t\t\t\t");
    getch();
    if(lanjut=='Y' || lanjut=='y') {
        cari();
    }
}

void cariNim() {
    system("cls");
    char lanjut;
    int cariNIM;
    char namaBaru[50];
    int nimBaru;
    char judulBaru[70];
    char kodeBaru[20];
    int waktuBaru;
    printf("\t\t\t\t\tSilahkan Masukkan NIM yang Ingin Anda Edit Datanya\n");
    printf("\t\t\t\t\tNIM : ");
    scanf("%d",&cariNIM);
    temp = head;
    while(temp!=NULL) {
        if(temp ->pinjam.nim==cariNIM) {
            break;
        }
        temp = temp ->next;
    }
    if(temp==NULL) {
        printf("\n\t\t\t\t\tMaaf, Data Tidak Ditemukan\n");
    }
    else {
        printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Edit\n");
        printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
        printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
        printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
        printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
        printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
        printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
        printf("\t\t\t\t\tSilahkan Edit Data\n");
        printf("\t\t\t\t\tNama Peminjam\t\t\t: ");
        scanf(" %[^\n]s",&namaBaru);
        strcpy(temp ->pinjam.nama,namaBaru);
        printf("\t\t\t\t\tNIM\t\t\t\t: ");
        scanf(" %d",&nimBaru);
        temp ->pinjam.nim = nimBaru;
        printf("\t\t\t\t\tJudul Buku\t\t\t: ");
        scanf(" %[^\n]s",&judulBaru);
        strcpy(temp ->pinjam.judulBuku,judulBaru);
        printf("\t\t\t\t\tKode Buku\t\t\t: ");
        scanf(" %[^\n]s",&kodeBaru);
        strcpy(temp ->pinjam.kode,kodeBaru);
        printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: ");
        scanf(" %d",&waktuBaru);
        temp ->pinjam.waktu = waktuBaru;
        temp ->pinjam.saldo = waktuBaru * 2000;
        printf("\n\t\t\t\t\tData Sudah Berhasil Diedit\n");
    }
    printf("\n\t\t\t\t\tApakah Anda Ingin Mengedit Data Lagi? [Y/N] ");
    scanf(" %c",&lanjut);
    printf("\t\t\t\t\t");
    getch();
    if(lanjut=='Y' || lanjut=='y') {
        cari();
    }
}

void cari() {
    system("cls");
    char input;
    if(head==NULL) {
        printf("\t\t\t\t\tMaaf Belum Ada Data yang Bisa Diedit\n");
        printf("\n\t\t\t\t\tSilahkan Isi Terlebih Dahulu Data Buku yang Ingin Diinputkan\n\n");
    }
    else {
        printf("\t\t\t\t\tIngin Mengedit Data Berdasarkan Apa?\n");
        printf("\t\t\t\t\t1. Nama\n");
        printf("\t\t\t\t\t2. NIM\n");
        printf("\t\t\t\t\tMasukkan Inputan : ");
        scanf(" %c",&input);
        if(input=='1') {
            cariNama();
        }
        else if(input=='2') {
            cariNim();
        }
        else {
            printf("\n\t\t\t\t\tMaaf, Inputan Anda Salah\n");
        }
    }
}

void deleteNama() {
    system("cls");
    char lanjut;
    char Nama[50];
    printf("\t\t\t\t\tSilahkan Masukkan Nama yang Ingin Anda Hapus Datanya\n");
    printf("\t\t\t\t\tNama : ");
    scanf(" %[^\n]s",&Nama);
    temp = head;
    current = NULL;
    while(temp!=NULL) {
        if(strcmp(Nama,temp ->pinjam.nama)==0) {
            hitung-=1;
            break;
        }
        current = temp;
        temp = temp ->next;
    }
    if(temp==NULL) {
        printf("\n\t\t\t\t\tMaaf, Data Tidak Ditemukan\n");
    }
    else if(head ->next==NULL) {
        printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
        printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
        printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
        printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
        printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
        printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
        printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
        free(temp);
        head = NULL;
        printf("\n\t\t\t\t\tData Sudah Berhasil Dihapus\n");
    }
    else {
        if(current==NULL) {
            printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
            printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
            printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
            printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
            printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
            printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
            printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
            head = temp ->next;
            free(temp);
            head ->prev = NULL;
            printf("\n\t\t\t\t\tData Sudah Berhasil Dihapus\n");
        }
        else {
            if(temp ->next==NULL) {
                printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
                printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
                printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
                printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
                printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
                printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
                printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
                temp = temp ->prev;
                free(temp->next);
                temp ->next = NULL;
            }
            else {
                printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
                printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
                printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
                printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
                printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
                printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
                printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
                current ->next = temp ->next;
                temp ->next ->prev = current;
                free(temp);
            }
            printf("\n\t\t\t\t\tData Sudah Berhasil Dihapus\n");
        }
    }
    printf("\n\t\t\t\t\tApakah Anda Ingin Menghapus Data Lagi? [Y/N] ");
    scanf(" %c",&lanjut);
    printf("\t\t\t\t\t");
    getch();
    if((lanjut=='Y' || lanjut=='y') && hitung>=1) {
        delete();
    }
    else if(hitung<1) {
        printf("\n\t\t\t\t\tMaaf, Tidak Ada Lagi Data yang Bisa Dihapus\n");
    }
}

void deleteNIM() {
    char lanjut;
    system("cls");
    int cariNIM;
    printf("\t\t\t\t\tSilahkan Masukkan NIM yang Ingin Anda Hapus Datanya\n");
    printf("\t\t\t\t\tNIM : ");
    scanf("%d",&cariNIM);
    temp = head;
    current = NULL;
    while(temp!=NULL) {
        if(temp ->pinjam.nim==cariNIM) {
            hitung-=1;
            break;
        }
        current = temp;
        temp = temp ->next;
    }
    if(temp==NULL) {
        printf("\n\t\t\t\t\tMaaf, Data Tidak Ditemukan\n");
    }
    else if(head ->next==NULL) {
        printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
        printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
        printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
        printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
        printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
        printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
        printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
        free(temp);
        head = NULL;
        printf("\n\t\t\t\t\tData Sudah Berhasil Dihapus\n");
    }
    else {
        if(current==NULL) {
            printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
            printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
            printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
            printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
            printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
            printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
            printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
            head = temp ->next;
            free(temp);
            head ->prev = NULL;
            printf("\n\t\t\t\t\tData Sudah Berhasil Dihapus\n");
        }
        else {
            if(temp ->next==NULL) {
                printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
                printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
                printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
                printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
                printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
                printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
                printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
                temp = temp ->prev;
                free(temp->next);
                temp ->next = NULL;
            }
            else {
                printf("\n\t\t\t\t\tBerikut Data yang Ingin Anda Hapus\n");
                printf("\t\t\t\t\tNama Peminjam\t\t\t: %s\n",temp -> pinjam.nama);
                printf("\t\t\t\t\tNIM\t\t\t\t: %d\n",temp -> pinjam.nim);
                printf("\t\t\t\t\tJudul Buku\t\t\t: %s\n",temp -> pinjam.judulBuku);
                printf("\t\t\t\t\tKode Buku\t\t\t: %s\n",temp -> pinjam.kode);
                printf("\t\t\t\t\tWaktu Peminjaman [Dalam Hari]\t: %d\n",temp -> pinjam.waktu);
                printf("\t\t\t\t\tSaldo Peminjaman\t\t: %d\n\n",temp ->pinjam.saldo);
                current ->next = temp ->next;
                temp ->next ->prev = current;
                free(temp);
            }
            printf("\n\t\t\t\t\tData Sudah Berhasil Dihapus\n");
        }
    }
    printf("\n\t\t\t\t\tApakah Anda Ingin Menghapus Data Lagi? [Y/N] ");
    scanf(" %c",&lanjut);
    printf("\t\t\t\t\t");
    getch();
    if((lanjut=='Y' || lanjut=='y') && hitung>=1) {
        delete();
    }
    else if(hitung<1) {
        printf("\n\t\t\t\t\tMaaf, Tidak Ada Lagi Data yang Bisa Dihapus\n");
    }
}

void delete() {
    system("cls");
    char input;
    if(head==NULL) {
        printf("\t\t\t\t\tMaaf Belum Ada Data yang Bisa Dihapus\n");
        printf("\n\t\t\t\t\tSilahkan Isi Terlebih Dahulu Data Buku yang Ingin Diinputkan\n\n");
    }
    else {
        printf("\t\t\t\t\tIngin Menghapus Data Berdasarkan Apa?\n");
        printf("\t\t\t\t\t1. Nama\n");
        printf("\t\t\t\t\t2. NIM\n");
        printf("\t\t\t\t\tMasukkan Inputan : ");
        scanf(" %c",&input);
        if(input=='1') {
            deleteNama();
        }
        else if(input=='2') {
            deleteNIM();
        }
        else {
            printf("\n\t\t\t\t\tMaaf, Inputan Anda Salah\n");
        }
    }
}

int main() {
    char input;
    do{
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t\t\tPERPUSTAKAAN CARLO\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t\t1. Tambah Data Peminjaman\n");
    printf("\t\t\t\t\t2. Lihat Data Peminjaman\n");
    printf("\t\t\t\t\t3. Edit Data Peminjaman\n");
    printf("\t\t\t\t\t4. Hapus Data Peminjaman\n");
    printf("\t\t\t\t\t5. Keluar\n");
    printf("\t\t\t\t\tMasukkan Inputan : ");
    scanf(" %c",&input);
    printf("\t\t\t\t\t");
    switch(input) {
        case '1': 
            getch();
            tambahData();
            break;
        case '2':
            getch();
            cetak();
            break;
        case '3':
            getch();
            cari();
            break;
        case '4':
            getch();
            delete();
            break;
        case '5':
            exit(0);
            break;
        default: printf("\n\t\t\t\t\tMaaf, Inputan Anda Salah\n");
            break;
    }
    printf("\n\t\t\t\t\tTekan Enter Untuk Kembali ke Menu Utama..");
    getch();
    system("cls");
    }while(input!='5');
    return 0;
}
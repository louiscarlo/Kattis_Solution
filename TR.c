#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

void gotoxy(int x, int y){
HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}


struct pinjam{
    char nama[50];
    int nim;
    char judulBuku[50];
    char kode[10];
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
    if(input>=1) {
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
        scanf(" %[^\n]s",&temp -> kode);
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
    else {
        printf("Maaf, Buku yang Harus Diinputkan Minimal 1 atau Lebih Dari 1\n");
    }
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
            printf("Kode Buku\t\t\t: %s\n",temp -> kode);
            printf("Waktu Peminjaman [Dalam Hari]\t: %d\n\n",temp -> waktu);
            i++;
            temp = temp -> next;
        }
    }
}

void update() {
    int ubah;
    system("cls");
    if(head==NULL) {
        printf("Maaf Data Anda Kosong\n");
        printf("\nSilahkan Isi Terlebih Dahulu Data Buku yang Ingin Diinputkan\n\n");
    }
    else {
        char Nama[50];
        int NIM;
        printf("Berapakah Data yang Ingin Anda Ubah?\n");
        scanf("%d",&ubah);
        if(ubah>=1) {
            if(ubah<=hitung) {
                for(int i=1; i<=ubah; i++) {
                    char namaBaru[50];
                    int nimBaru;
                    char judulBukuBaru[50];
                    char kodeBaru[10];
                    int waktuBaru;
                    temp = head;
                    printf("\nSilahkan Inputkan Nama dan NIM ke-%d Untuk Data yang Ingin Anda Edit\n\n",i);
                    printf("Nama\t: ");
                    scanf(" %[^\n]s",&Nama);
                    printf("\n");
                    printf("NIM\t: ");
                    scanf("%d",&NIM);
                    printf("\n");
                    while(temp!=NULL) {
                        if((strcmp(temp->nama,Nama)==0) && temp->nim==NIM) {
                           break;
                        }
                        temp = temp->next;
                    }
                    if(temp==NULL) {
                        printf("\nMaaf, Data Tidak Ditemukan\n");
                    }
                    else{
                        printf("\nData buku ke-%d\n",i);
                        printf("Nama Peminjam\t\t\t: %s\n",temp -> nama);
                        printf("NIM\t\t\t\t: %d\n",temp -> nim);
                        printf("Judul Buku\t\t\t: %s\n",temp -> judulBuku);
                        printf("Kode Buku\t\t\t: %s\n",temp -> kode);
                        printf("Waktu Peminjaman [Dalam Hari]\t: %d\n\n",temp -> waktu);
                        printf("Edit Data ke-%d\n",i);
                        printf("Nama Peminjam\t\t\t: ");
                        scanf(" %[^\n]",&namaBaru);
                        strcpy(temp->nama,namaBaru);
                        printf("NIM\t\t\t\t: ");
                        scanf("%d",&nimBaru);
                        temp->nim = nimBaru;
                        printf("Judul Buku\t\t\t: ");
                        scanf(" %[^\n]s",&judulBukuBaru);
                        strcpy(temp->judulBuku,judulBukuBaru);
                        printf("Kode Buku\t\t\t: ");
                        scanf(" %[^\n]s",&kodeBaru);
                        strcpy(temp->kode,kodeBaru);
                        printf("Waktu Peminjaman [Dalam Hari]\t: ");
                        scanf(" %d",&waktuBaru);
                        temp->waktu = waktuBaru;
                        printf("\nData Berhasil Diedit\n");
                    }
                }
            }
            else {
                printf("\nMaaf, Data yang Ingin Diubah Lebih Dari yang Sudah Tersedia\n");
            }
        }
        else{
            printf("\nMaaf, Data Buku yang Bisa Diubah Minimal 1 Atau Lebih Dari 1\n");
        }
    }
}

void delete() {
    char ulang;
    system("cls");
    char Nama[50];
    int NIM;
    if (head == NULL) {
        printf("Maaf Data Anda Kosong\nTidak Ada Data Yang Bisa di Hapus\n");
    }
    else {
        printf("\nMasukkan Nama dan NIM dari Data yang Ingin Dihapus:\n");
        printf("Nama\t: ");
        scanf(" %[^\n]s", &Nama);
        printf("NIM\t: ");
        scanf("%d", &NIM);
        temp = head;
        prev = NULL;
        while (temp != NULL) {
            if ((strcmp(temp->nama, Nama) == 0) && temp->nim == NIM) {
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("\nMaaf, Data Tidak Ditemukan\n");
        }
        else {
            printf("\nData yang akan dihapus:\n");
            printf("Nama Peminjam\t\t\t: %s\n",temp -> nama);
            printf("NIM\t\t\t\t: %d\n",temp -> nim);
            printf("Judul Buku\t\t\t: %s\n",temp -> judulBuku);
            printf("Kode Buku\t\t\t: %s\n",temp -> kode);
            printf("Waktu Peminjaman [Dalam Hari]\t: %d\n\n",temp -> waktu);
            if (prev == NULL) {
                head = temp->next;
            }
            else {
                prev->next = temp->next;
            }
            free(temp);
            printf("\nData Berhasil Dihapus\n");
            hitung-=1;
        }
        printf("\nApakah Anda Ingin Menghapus Data Lagi? [Y/T] ");
        scanf(" %c",&ulang);
        getch();
        if((ulang=='y' || ulang=='Y')&&hitung>=1) {
            delete();
        }
        else if(hitung<1) {
            printf("\nMaaf, Sudah Tidak Ada Lagi Data yang Bisa Dihapus\n");
        }
    }
}
void urutkanNama() {
    system("cls");
    if (head == NULL) {
        printf("Maaf Belum Ada Data yang Diisikan\n");
        printf("\nSilahkan Isi Terlebih Dahulu Data Buku yang Ingin Diinputkan\n\n");
    }
    else{
        int swapped;
        struct pinjam *p;
        struct pinjam *lptr = NULL;

        do {
            swapped = 0;
            p = head;

            while (p->next != lptr) {
                if (strcmp(p->nama, p->next->nama) > 0) {
                    temp = (struct pinjam*) malloc(sizeof(struct pinjam));
                    strcpy(temp->nama, p->nama);
                    temp->nim = p->nim;
                    strcpy(temp->judulBuku, p->judulBuku);
                    strcpy(temp->kode, p->kode);
                    temp->waktu = p->waktu;

                    strcpy(p->nama, p->next->nama);
                    p->nim = p->next->nim;
                    strcpy(p->judulBuku, p->next->judulBuku);
                    strcpy(p->kode, p->next->kode);
                    p->waktu = p->next->waktu;

                    strcpy(p->next->nama, temp->nama);
                    p->next->nim = temp->nim;
                    strcpy(p->next->judulBuku, temp->judulBuku);
                    strcpy(p->next->kode, temp->kode);
                    p->next->waktu = temp->waktu;

                    free(temp);
                    swapped = 1;
                }
                p = p->next;
            }
            lptr = p;
        } while (swapped == 1);
        printf("Data Setelah Diurutkan\n");
        lihatData();
    }
}
void urutkanNIM() {
    system("cls");
    if(head==NULL) {
        printf("Maaf Belum Ada Data yang Diisikan\n");
        printf("\nSilahkan Isi Terlebih Dahulu Data Buku yang Ingin Diinputkan\n\n");
    }
    else {
        int swapped;
        struct pinjam *p;
        struct pinjam *lptr = NULL;

        do {
            swapped = 0;
            p = head;

            while (p->next != lptr) {
                if (p->nim > p->next->nim) {
                    temp = (struct pinjam*) malloc(sizeof(struct pinjam));
                    strcpy(temp->nama, p->nama);
                    temp->nim = p->nim;
                    strcpy(temp->judulBuku, p->judulBuku);
                    strcpy(temp->kode,p->kode);
                    temp->waktu = p->waktu;

                    strcpy(p->nama, p->next->nama);
                    p->nim = p->next->nim;
                    strcpy(p->judulBuku, p->next->judulBuku);
                    strcpy(p->kode, p->next->kode);
                    p->waktu = p->next->waktu;

                    strcpy(p->next->nama, temp->nama);
                    p->next->nim = temp->nim;
                    strcpy(p->next->judulBuku, temp->judulBuku);
                    strcpy(p->next->kode, temp->kode);
                    p->next->waktu = temp->waktu;

                    free(temp);
                    swapped = 1;
                }
                p = p->next;
            }
            lptr = p;
        } while (swapped == 1);
        printf("Data Setelah Diurutkan\n");
        lihatData();
    }
}
void urt(){
    system("cls");
    int n;
    printf("urutkan berdasar\n");
    printf("1. Lihat Data sesuai urutan NIM \n");
    printf("2. Lihat Data sesuai urutan Nama\n");
    printf("Masukkan pilihan : ");
    scanf(" %d", &n);
    if (n == 1){
    urutkanNIM();
    }
    else if (n == 2){
    urutkanNama();
    }
    else{
    printf("Menu tidak ada!!!");
    getch();
    urt();
    }
}
void menuUtama() {
    char input;
    do{
    gotoxy(36,1);
    printf("============================================================================\n");
    printf("\t\t\t\t   ||               Menu Peminjaman Buku Perpustakaan Ngatno                    ||\n");
    printf("\t\t\t\t    ============================================================================\n");
    printf("1. Tambah Data Peminjaman\n");
    printf("2. Lihat Data Peminjaman\n");
    printf("3. Edit Data Peminjaman\n");
    printf("4. Hapus Data Peminjaman\n");
    printf("5. Keluar\n");
    printf("Masukkan Pilihan : ");
    scanf(" %c",&input);
    getch();
    switch(input) {
        case '1':
            tambahData();
            break;
        case '2':
            urt();
            break;
        case '3':
            update();
            break;
        case '4':
            delete();
            break;
        case '5':
            exit(0);
            break;
        default: printf("\nMaaf Inputan Anda Salah\n\n");
            break;
    }
    printf("\nTekan Enter Untuk Kembali Ke Menu Utama..");
    getch();
    system("cls");
    } while(input!='5');
}

int main() {
  system("COLOR 8b");

    int lanjut =0, ulang = 0,j =0;
    for(int i=0; i<=100; i++) {
            gotoxy(50,12);
        printf("Sedang Loading %d %%",i);
        system("cls");
    }
    for(int i=0; i<4; i++) {
        char c;
        char username[20],password[20];
 gotoxy(39,6);
    printf("===================================================\n");
    gotoxy(39,7);
    printf("|               PERPUSTAKAAN NGATNO               |\n");
    gotoxy(39,8);
    printf("===================================================\n\n");
    gotoxy(48,9);
    printf("Selamat Datang di Perpustakaan Ini\n");
        gotoxy(39,10);
        printf("Silahkan Masukkan Username dan Password di Bawah Ini\n\n");
        gotoxy(46,13);
        printf("Username\t: ");
        scanf(" %[^\n]s",&username);
        gotoxy(46,15);
        printf("Password\t: ");
        scanf(" %[^\n]s", &password);

        // while ((c = getch()) != '\r') {
        //     if (c == '\b' && j > 0) {
        //         printf("\b \b");
        //         j--;
        //     } else if (c != '\b') {
        //         printf("*");
        //         password[j] = c;
        //         j++;
        //     }
        // }
        printf("\n");

        gotoxy(60,13);
        if(strcmp(username,"Ngatno")==0 && strcmp(password,"123")==0) {
            break;
        }
        else{
            lanjut++;
            ulang++;
            if(ulang<=3) {
                gotoxy(60,17);
                printf("\n\t\t\t\tMaaf Username atau Password Anda Salah,Silahkan Coba Lagi");
                j = 0;
                password[20] = '\0';
                getch();
                system("cls");
            }
            else {
                break;
            }
        }
    }

    if(lanjut<=3) {

        gotoxy(55,19);
        printf("Anda Berhasil Masuk..");
        getch();
        system("cls");
        menuUtama();
    }
    else{
        printf("\n\n\n\n\t\t\t\t\tMaaf Anda Telah Gagal dan Tidak Dapat Mencoba Lagi\n\n\t\t\t\t");
    }
    return 0;
}

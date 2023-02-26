#include <stdio.h>
#include <string.h>
struct mahasiswa {
    char nim[10];
    char nama[10];
    char fakultas[30];
    char prodi[30];
    int angkatan;
};
int main() {
    struct mahasiswa mhs1;
    strcpy(mhs1.nim,"672022334");
    strcpy(mhs1.nama,"Louis");
    strcpy(mhs1.fakultas,"Teknologi Informasi");
    strcpy(mhs1.prodi,"Teknik Informatika");
    mhs1.angkatan=2022;


    printf("%d\n",mhs1.angkatan);
    printf("%s\n",mhs1.fakultas);
    printf("%s\n",mhs1.nama);
    printf("%s\n",mhs1.nim);
    printf("%s\n",mhs1.prodi);


    struct mahasiswa kbm[5];
    
    for(int i=0;i<5;i++) {
        printf("Mahasiswa %d\n",i+1);
        scanf(" %[^\n]s",&kbm[i].nim);
        scanf(" %[^\n]s",&kbm[i].nama);
        scanf(" %[^\n]s",&kbm[i].fakultas);
        scanf(" %[^\n]s",&kbm[i].prodi);
        scanf("%d",&kbm[i].angkatan);
    }
    for(int i=0;i<5;i++) {
        printf("%s",kbm[i].nim);
        printf("%s",kbm[i].nama);
        printf("%s",kbm[i].fakultas);
        printf("%s",kbm[i].prodi);
        printf("%d",kbm[i].angkatan);
    }



    return 0;
}
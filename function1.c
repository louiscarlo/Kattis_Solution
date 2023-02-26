#include <stdio.h>
#include <stdbool.h>

void jumlah(int a,int b) {
    printf("%d + %d = %d",a,b,a+b);
}
void jumlahArray(int a[5]) {

    int total=0;
    for(int i=0;i<5;i++) {
        total+=a[i];
    }
    printf("%d",total);
}

int pengurangan(int a, int b) {
    return a-b;
}

bool genap(int angka) {
    if(angka%2==0) {
        return true;
    }
    else {
        return false;
    }
    // return angka % 2==0;
}
int main() {
    //jumlah(5,3);
    int angka[]={1,2,3,4,5};
    jumlahArray(angka);

    int hasil = pengurangan(10,12);
    printf("\nHasil Pengurangan = %d",hasil);
    
    int angka1=5;
    // printf("%d",6%2==0);
    printf("\nangka %d adalah %d",angka1, true);
    return 0;
}
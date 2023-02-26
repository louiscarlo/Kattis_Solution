#include <stdio.h>

void tambah(int **aa) {
    *aa++;
    printf("%d",*aa);
}

int main() {
    int a=55;

    int* b=&a;

    printf("%d \n",a);

    printf("%p \n",&a);

    printf("%d \n",b);

    printf("%d \n",*b);

    int angka=1;
    int * angka2=&angka;
    * angka2 += 5;
    printf("angka = %d",angka);
    int ** angka3=&angka2;
    printf(" Angka 3 = %d",**angka3);


    
    return 0;
}
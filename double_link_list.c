#include <stdio.h>
#include <stdlib.h>

struct MainData{
    int waktu;
    int jumlah;
};

struct Frame{
    struct MainData Data;
    struct Frame *prev;
    struct Frame *next;
}*head,*current,*temp;

void tambahData(int a, int b) {
    temp = (struct Frame*) malloc(sizeof(struct Frame));
    temp ->Data.waktu = a;
    temp ->Data.jumlah = b;
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

void cetak() {
    temp = head;
    while(temp!=NULL) {
        printf("%d_%d_",temp ->Data.waktu, temp ->Data.jumlah);
        temp = temp ->next;
    }
}

void delete(int tampung) {
    if(head==NULL) {
        printf("\nData Empty\n");
    }
    else {
        temp = head;
        current = NULL;
        while(temp!=NULL) {
            if(tampung == temp ->Data.waktu) {
                break;
            }
            current = temp;
            temp = temp ->next;
        }
        if(temp==NULL) {
            printf("\nData Not Found\n");
        }
        else if(temp ->next==NULL){
            temp = temp ->prev;
            free(temp ->next);    
            temp ->next = NULL;
        }
        else {
            if(current==NULL) {
                head = temp ->next;
                free(temp);
                head ->prev = NULL;
            }
            else {
                current ->next = temp ->next;
                temp ->next ->prev = current;
                free(temp);
            }
        }
    }
}

int main() {
    int a,b;
    tambahData(5,6);
    tambahData(7,8);
    scanf("%d %d",&a,&b);
    tambahData(a,b);
    cetak();
    printf("\n");
    delete(a);
    cetak();
    return 0;
}
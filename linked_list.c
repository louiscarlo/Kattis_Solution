#include <stdio.h>
#include <stdlib.h>


struct Numbers{
    int number;
    struct Numbers *next;
};

void cetak(struct Numbers *n) {
    while(n!=NULL) {
        printf("%d_",n->number);
        n = n ->next; 
    }
}

void cari(struct Numbers *start, int dicari) {
    while(start ->number!=dicari) {
        start = start ->next; 
    }
}

struct Numbers cari2(struct Numbers *start, int dicari) {
    while(start ->number!=dicari) {
        start = start ->next; 
    }
    return *start;
}

void balikan1(int **before) {
    **before = 1;
}

void push(struct Numbers **headRef,int newNumber) {
    struct Numbers *temporary = malloc(sizeof(struct Numbers));

    temporary ->number = newNumber;
    temporary ->next = *headRef;

    *headRef = temporary;
}

void insertAfter(struct Numbers *prevNumber,int newNumber) {
    struct Numbers * temporary = malloc(sizeof(struct Numbers));
    temporary ->number = newNumber;
    temporary ->next = prevNumber ->next;
    prevNumber ->next = temporary;
}

void append(struct Numbers **headRef, int newNumber) {
    struct Numbers* temporary = malloc(sizeof(struct Numbers));
    temporary ->number = newNumber;
    temporary ->next = NULL;

    struct Numbers *last = *headRef;

    if(*headRef==NULL) {
        *headRef = temporary;
        return;
    }
    while(last ->next!=NULL) {
        last = last -> next;
    }
    last ->next = temporary;

}

int main() {
    struct Numbers *head = NULL;
    // struct Numbers *dua = NULL;
    // struct Numbers *tiga = NULL;
    // struct Numbers *empat = NULL;

    // head = malloc(sizeof(struct Numbers));
    // dua = malloc(sizeof(struct Numbers));
    // tiga = malloc(sizeof(struct Numbers));
    // empat = malloc(sizeof(struct Numbers));

    // head ->number = 2;
    // head -> next = dua;

    // dua -> number = 3;
    // dua -> next = tiga;

    // tiga -> number = 4;
    // tiga -> next = empat;

    // empat -> number = 5;
    // empat ->next = NULL;

    // cetak(head);

    // penerapan mengubah data menggunakan pointer tanpa "return" dengan pointer of pointer
    // int *b;
    // balikan1(&b);
    // printf("%d",*b);
    append(&head,1);

    push(&head, 2);

    push(&head,5);

    push(&head,3);

    append(&head,7);

    insertAfter(head,6);

    append(&head,4);

    cetak(head);
    struct Numbers *tampung = malloc(sizeof(struct Numbers));
    *tampung = cari2(head,5);
    // cari(tampung,2);
    printf("\n%d",tampung->number);
}
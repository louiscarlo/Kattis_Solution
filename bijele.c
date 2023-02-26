#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    int king=1;
    int queens=1;
    int rooks=2;
    int bishops=2;
    int knights=2;
    int pawns=8;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a==king) {
        printf("0 ");
    }
    else if(a>king) {
        printf("%d ",king-a);
    }
    else if(a<king) {
        printf("%d ",king-a);
    }

    if(b==queens) {
        printf("0 ");
    }
    else if(b>queens) {
        printf("%d ",queens-b);
    }
    else if(b<queens) {
        printf("%d ",queens-b);
    }

    if(c==rooks) {
        printf("0 ");
    }
    else if(c>rooks) {
        printf("%d ",rooks-c);
    }
    else if(c<rooks) {
        printf("%d ",rooks-c);
    }

    if(d==bishops) {
        printf("0 ");
    }
    else if(d>bishops) {
        printf("%d ",bishops-d);
    }
    else if(d<bishops) {
        printf("%d ",bishops-d);
    }

    if(e==knights) {
        printf("0 ");
    }
    else if(e>knights) {
        printf("%d ",knights-e);
    }
    else if(e<knights) {
        printf("%d ",knights-e);
    }

    if(f==pawns) {
        printf("0 ");
    }
    else if(f>pawns) {
        printf("%d ",pawns-f);
    }
    else if(f<pawns) {
        printf("%d ",pawns-f);
    }
}
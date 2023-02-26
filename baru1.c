#include <stdio.h>
int main() {
    for(int a=1;a<=7;a+=2) {
        printf("%d \n",a);
    }
    printf("\n \n");
    for(int b=2;b<=8;b+=2) {
        printf("%d \n",b);
    }
    printf("\n \n");
    for(int c=5;c>=1;c--) {
        printf("%d \n",c);
    }

    printf("\n \n");

    for(int i=1;i<=5;i++) {
        printf("%d \n",i);
    }

    printf("\n \n");

    for(int c=1;c<=5;c++) {
        printf("%d \n",c*c);
    }

    printf("\n \n");

    for(int a=1;a<=6;a++) {
        if(a%2==0 && a%3==0) {
            printf("2aw \n");
        }
        else if(a%2==0) {
            printf("2 \n");
        }
        else if(a%3==0) {
            printf("aw \n");
        } else {
            printf("%d \n",a);
        }
    }

    printf("=======\n");
    for (int a=1; a<=6; a++) {
        if (a %2 ==0) {
            printf("2 ");
        } 

        if (a % 3 ==0) {
            printf("aw");
        } 
        
        if (a%2 != 0 && a%3!=0 ) {
            printf("%d", a);
        }

        printf("\n");        
    }

    printf("new section 1\n");
    int total = 10;
    int angka[]={0,1,2,3};
    
    for(int a=0;a<4;a++) {
    //    angka[a]=angka[a]+2;
        printf("%d \n",angka[a]*angka[a]);
    }
    printf("New Section 2 \n");
    int angka1[4][4]= {{1,2,3,4},{1,2,3,5},{3,2,1,6},{5,6,7,9}};
    
    for(int i=0;i<4;i++) {
        for(int j=0;j<=i;j++) {
            printf("%d ",angka1[i][j]);
        }
        printf("\n");
        
    }



}
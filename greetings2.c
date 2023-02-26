#include <stdio.h>
int main() {
    char a[1000]; // {e,e,m,k,j,h}
    scanf("%s",&a);
   

    for(int i=0;i<100;i++) {
        if(a[i]=='L' || a[i]=='l') {
            printf("Alligator!");
            break;
        }
        if(a[i]=='w' || a[i]=='W') {
            printf("what's uhat's up");
            break;
        }
        
        if(a[i]=='h' && a[i+1]=='e') {
            // for(int i=0;i<2;i++) {
            //     printf("e");
            // }

            printf("ee");
        }
        else {
            printf("%c",a[i]);
            if(a[i]=='y') {
                break;
            }
        }
    }
}
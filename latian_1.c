#include <stdio.h>
int main() {
   char a[1000];
   scanf("%[^\n]",&a);
   int item;
   int saat_ini=1;
   scanf("%d",&item);
   for(int i=0;a[i]!='\0';i++) {
        printf("%c ",a[i]);
        if(a[i]==' ') {
            printf("%d",saat_ini++);        
        }
   }
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    int g,t,n;
    int total=0;
    int hasil;
    scanf("%d",&g);
    scanf("%d",&t);
    hasil=g-t;

    scanf("%d",&n);
    // printf("%d,%d,%d,%d\n",g,t,n,hasil);
    // if(t<=g-2000) {
    for(int a=1;a<=n;a++) {
        int o;
        scanf("%d",&o);
        total+=o;
    }
    printf("%d",(hasil*90/100)-total);
    // printf("%d",(90/100*hasil)-total);

    // if(g%10==0 && t%10==0) {
    //     printf("%d",(90/100*hasil)-total);
    //     }
    //     else{
    //         exit(0);
    //     } 
    // }
    // else{
    //     exit(0);
    // }
    // if(t>=3000 && t<=12000) {
    // }
    // else{
    //     exit(0);
    // }
    // if(g>=5000 && g<=25000) {
    // }
    // else {
    //     exit(0);
    // }
    return 0;
}
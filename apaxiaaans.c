#include <stdio.h>
int main() {
    char input[250];
    scanf("%s",&input);
    for(int i=0;i<250;i++) {
        if(input[i]<97 || input[i]>122) {
            break;
        }
        if(input[i]!=input[i+1]) {
            printf("%c",input[i]);
        }
    }
    return 0;
}
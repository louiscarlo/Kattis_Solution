#include <stdio.h>
int main() {
    char s[1000];
    scanf(" %s",&s);
    for(int i=0;i<1000;i++) {
        if(s[i]<97 && s[i]>122) {
            break;
        }
        if(s[i]=='a' && s[i]!=s[i+1]) {
           printf("%c",s[i]);
        }
    }
}
#include<stdio.h>
int main(){
    int i;
    char n[1000];
    scanf("%s",&n);
    for(i=0;n[i]!=NULL;i++){
        if(n[i]=='6'){
            n[i]='9';
            break;
        }
    }
    printf("%s",n);
}
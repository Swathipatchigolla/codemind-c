#include<stdio.h>
int main(){
    char s[20];
    int i=0,x=0,y=0;
    scanf("%s",&s);
    while(s[i]=='z'){
        x++;
        i++;
    }
    while(s[i]!=NULL){
        y++;
        i++;
    }
    if(y==2*x) printf("Yes");
    else printf("No");
}
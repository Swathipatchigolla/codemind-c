#include<stdio.h>
#include<ctype.h>
int main(){
    int t,i,f=1,j;
    char s[10000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",s);
        for(j=0;s[j]!=NULL;j++){
            if(isdigit(s[j])==0){
                f=0;
                break;
            }
        }
        if(f==1) printf("True
");
        else printf("False
");
        f=1;
    }
}
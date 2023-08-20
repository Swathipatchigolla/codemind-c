#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0,b=1,c,n,x,y;
    scanf("%d",&n);
    c=a+b;
    while(1){
        x=c;
        y=b+c;
        if(n>=x&&n<=y){
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
    if(abs(x-n)==abs(y-n)){
        printf("%d %d",x,y);
    }
    else if(abs(x-n)<abs(y-n)){
        printf("%d",x);
    }
    else printf("%d",y);
}
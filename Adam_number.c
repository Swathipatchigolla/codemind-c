#include<stdio.h>
int main(){
    int n,d,x=0,y=0,m,b,r;
    scanf("%d",&n);
    d=n*n;
    while(n!=0){
        r=n%10;
        x=x*10+r;
        n/=10;
    }
    b=x*x;
    while(b!=0){
        m=b%10;
        y=y*10+m;
        b/=10;
    }
    if(d==y)
    printf("True");
    else
    printf("False");
}
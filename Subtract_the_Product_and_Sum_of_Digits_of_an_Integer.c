#include<stdio.h>
int main(){
    int n,i,s=0,r,p=1;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        s+=r;
        p*=r;
        n/=10;
    }
    printf("%d",p-s);
}
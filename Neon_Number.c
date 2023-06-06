#include<stdio.h>
int main(){
    int i,n,r,s=0;
    scanf("%d",&n);
    i=n*n;
    while(i>0){
        r=i%10;
        s+=r;
        i/=10;
    }
    if(s==n)
    printf("Neon Number
");
    else
    printf("Not Neon Number
");
}
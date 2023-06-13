#include<stdio.h>
#define max(a,b) a>b?a:b
int main(){
    int n,i,mx,m,j,lcm;
    scanf("%d%d",&m,&n);
    mx=max(m,n);
    j=2;
    lcm=mx;
    while(1){
        if(lcm%m==0&&lcm%n==0){
            printf("%d",lcm);
            break;
        }
        else lcm=mx*j;
        j++;
    }
}
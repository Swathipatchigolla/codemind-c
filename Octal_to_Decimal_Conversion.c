#include<stdio.h>
#include<math.h>
int main(){
    int n,m,c,r,k=0;
    float x,s=0;
    scanf("%d",&n);
    m=n;
    while(n>0){
        c++;
        r=n%10;
        k=k*10+r;
        n/=10;
    }
    c--;
    while(k>0){
        r=k%10;
        x=pow(8,c);
        s+=r*x;
        c--;
        k/=10;
    }
    printf("%.0f",s);
}
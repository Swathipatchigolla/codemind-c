#include<stdio.h>
char* pal(int x){
    int j,r,p=1,s=0;
    j=x;
    while(j>0){
        r=j%10;
        p*=r;
        s+=r;
        j/=10;
    }
    if(s==p) return "Spy Number";
    else return "Not Spy Number";
}
int main(){
    int a;
    scanf("%d",&a);
    printf(pal(a));
}
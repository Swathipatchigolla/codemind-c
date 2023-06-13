#include<stdio.h>
int pal(int x){
    int j,r,p=0;
    j=x;
    while(j>0){
        r=j%10;
        p=p*10+r;
        j/=10;
    }
    if(x==p) return 1;
    else return 0;
}
int main(){
    int a,b,c,r,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        r=pal(i);
        if(r==1){
            printf("%d ",i);
        }
    }
}
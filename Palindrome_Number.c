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
    int t,n;
    scanf("%d",&t);
    while(t){
        scanf("%d",&n);
        if(pal(n)==1) printf("True
");
        else printf("False
");
        t--;
    }
}
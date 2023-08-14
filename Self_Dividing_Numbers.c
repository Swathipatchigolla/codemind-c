#include<stdio.h>
int isselfdiv(int x){
    int k=x,r;
    while(x>0){
        r=x%10;
        if(r==0) return 0;
        if(k%r!=0){
            return 0;
        }
        x/=10;
    }
    return 1;
}
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        if(isselfdiv(i)==1){
            printf("%d ",i);
        }
    }
}
#include<stdio.h>
int fact(int n){
    if(n==1) return 1;
    else return n*fact(n-1);
}
int main(){
    int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d
",fact(n));
    }
}
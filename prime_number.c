#include<stdio.h>
int prime(int n){
    int i,f=1;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            f=0;
            break;
        }
    }
    return f;
}
int main(){
    int n;
    scanf("%d",&n);
    if(prime(n)==1) printf("prime
");
    else printf("not a prime
");
}
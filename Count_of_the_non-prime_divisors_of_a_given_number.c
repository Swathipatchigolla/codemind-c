#include<stdio.h>
#include<math.h>
int is_notprime(int x){
    int i;
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n,f=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0&&is_notprime(i)==1){
            f++;
        }
    }
    printf("%d",f);
}
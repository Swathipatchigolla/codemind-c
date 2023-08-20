#include<stdio.h>
int main(){
    int n,h=0;
    scanf("%d",&n);
    n--;
    while(n){
        h+=n;
        n--;
    }
    printf("%d",h);
}
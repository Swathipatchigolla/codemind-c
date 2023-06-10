#include<stdio.h>
int main(){
    int n,i,k,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||i+j==n-1){
            printf("x");
            }
            else printf("0");
        }
        printf("
");
    }
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    if(n<3||n>100){
        printf("The pattern is not possible");
        exit(0);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("
");
    }
    for(i=i-2;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("*");
        }
        printf("
");
    }
}
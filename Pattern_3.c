#include<stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(k=0;k<=i;k++){
            printf("%d",k+1);
        }
        printf("
");
    }
}
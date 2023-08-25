#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=65,x,i,j;
    scanf("%d",&x);
    n+=x-1;
    for(i=n;i>=65;i--)
    {
        for(j=x;j>0;j--)
        printf("%c ",i);
        x--;
        printf("
");
    }
}
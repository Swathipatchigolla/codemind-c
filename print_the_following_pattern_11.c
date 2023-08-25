#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=65,x,i,j;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        printf("%c ",n+i);
        printf("
");
    }
}
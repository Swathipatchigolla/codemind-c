#include<stdio.h>
int dg(int x){
    int c=0;
    while(x>0){
        c++;
        x/=10;
    }
    return c;
}
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(dg(a[i])%2==0)
        c++;
    }
    printf("%d",c);
}
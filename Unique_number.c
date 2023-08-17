#include<stdio.h>
int main(){
    int n,r,i=0,j,k,f=1;
    int a[1000],b[1000];
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        a[i++]=r;
        n/=10;
    }
    for(j=0;j<=i;j++){
        b[j]=a[j];
    }
    for(j=0;j<=i;j++){
        for(k=0;k<=i;k++){
            if(j!=k&&a[j]==b[k]){
                f=0;
                break;
            }
        }
    }
    if(f==1) printf("Unique Number");
    else printf("Not Unique Number");
}
#include<stdio.h>
#define max(a,b) a>b?a:b
int main(){
    int n,i,mx,j,lcm;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        mx=max(a[i],a[i+1]);
    }
    j=2;
    lcm=mx;
    for(i=0;i<n;i++){
        if(lcm%a[i]!=0){
            lcm=mx*j;
            j++;
            i=0;
        }
    }
    printf("%d",lcm);
}
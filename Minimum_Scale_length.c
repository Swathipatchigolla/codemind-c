#include<stdio.h>
#define min(a,b) a<b?a:b
int main(){
    int n,m,g,i,j,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        m=min(a[i],a[i+1]);
    }
    i=1;
    while(i<=m){
        f=1;
        for(j=0;j<n;j++){
            if(a[j]%i!=0)
            f=0;
        }
        if(f==1) g=i;
        i++;
    }
    printf("%d",g);
}
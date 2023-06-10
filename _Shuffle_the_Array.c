#include<stdio.h>
int main(){
    int n,i=0,j,k=0,m;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    j=m;
    for(i=0;i<m;i++,j++){
        b[k++]=a[i];
        b[k++]=a[j];
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}
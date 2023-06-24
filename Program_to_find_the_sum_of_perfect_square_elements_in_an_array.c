#include<stdio.h>
int sr(int x){
    int i;
    for(i=1;i<=x;i++){
        if(i*i==x)
        return 1;
    }
    return 0;
}
int main(){
    int n,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(sr(a[i])==1){
            s+=a[i];
        }
    }
    printf("%d",s);
}
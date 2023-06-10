#include<stdio.h>
int main(){
    int n,i,f=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=0&&a[i]!=1){
            f=0;
            break;
        }
    }
    if(f==1) printf("True");
    else printf("False");
}
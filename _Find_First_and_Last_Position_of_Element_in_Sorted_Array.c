#include<stdio.h>
int main(){
    int n,i,k,a=-1,b=-1;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(ar[i]==k){
            a=i;
            break;
        }
    }
    while(ar[i]==k){
        b=i;
        i++;
    }
    printf("%d %d",a,b);
}
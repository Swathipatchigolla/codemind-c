#include<stdio.h>
int main(){
    int n,i,c=0,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0&&i%2==0){
            c++;
        }
    }
    if(n%2==0) s=n/2;
    else s=n/2+1;
    if(c==s) printf("True");
    else printf("False");
}
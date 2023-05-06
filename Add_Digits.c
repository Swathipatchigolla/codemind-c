#include<stdio.h>
int sum(int n){
    int r,s=0;
while(n>0){
        r=n%10;
        s+=r;
        n/=10;
    }
if(s%10!=s) s=sum(s);
else return s;
}
int main(){
    int n,s;
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
}
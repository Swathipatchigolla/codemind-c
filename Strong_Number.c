#include<stdio.h>
int fact(int f){
    if(f==1||f==0)
    return 1;
    return f*fact(f-1);
}
int main(){
    int n,r,c=0,m;
    scanf("%d",&n);
    m=n;
    while(n>0){
        r=n%10;
        c+=fact(r);
        n/=10;
    }
    if(m==c) printf("The number %d is a strong number",m);
    else printf("The number %d is not a strong number",m);
}
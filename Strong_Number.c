#include<stdio.h>
int fact(int f){
    if(f==0||f==1){
        return 1;
    }
    else{
        f=f*fact(f-1);
    }
    return f;
}
int main(){
    int n,t,i,m,r;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int s=0;
        m=n;
        while(n>0){
            r=n%10;
            s+=fact(r);
            n/=10;
        }
        if(m==s){
            printf("Strong
");
        }
        else{
            printf("Not Strong
");
        }
    }
}
#include<stdio.h>
int prime(int n){
    int i,f=1;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            f=0;
            break;
        }
    }
    return f;
}
int main(){
    int t,n,i,j,k,p,q,r;
    scanf("%d",&t);
    for(k=0;k<t;k++){
        scanf("%d",&n);
        if(prime(n)==1){
            printf("%d
",n);
        }
        else{
        i=n-1;
        while(1){
            r=prime(i);
            if(r==1){
                p=i;
                break;
            }
            i-=1;
        }
        j=n+1;
        while(1){
            r=prime(j);
            if(r==1){
                q=j;
                break;
            }
            j+=1;
        }
        if(n-p<q-n){
            printf("%d
",p);
        }
        else if(n-p==q-n){
            printf("%d
",p);
        }
        else{
            printf("%d
",q);
        }
        }
    }
}

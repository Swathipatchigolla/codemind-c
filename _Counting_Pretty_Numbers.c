#include<stdio.h>
int main(){
    int l,r,c,i,j,x,t;
    scanf("%d",&t);
    for(j=0;j<t;j++){
    scanf("%d%d",&l,&r);
    c=0;
    for(i=l;i<=r;i++){
        x=i%10;
        if(x==2||x==3||x==9){
            c++;
        }
    }
    printf("%d
",c);
    }
}
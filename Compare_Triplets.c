#include<stdio.h>
int main(){
    int i;
    int a[3],b[3],c[2]={0,0};
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]>b[i]) c[0]+=1;
        else if(a[i]<b[i]) c[1]+=1;
    }
    for(i=0;i<2;i++){
        printf("%d ",c[i]);
    }
}
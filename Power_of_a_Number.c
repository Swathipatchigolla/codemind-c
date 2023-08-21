#include<stdio.h>
#include<math.h>
int main(){
    int x,y,m,s;
    float r;
    scanf("%d%d%d",&x,&y,&m);
    r=pow(x,y);
    s=(int)r;
    printf("%d",s%m);
}
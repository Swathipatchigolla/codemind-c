#include<stdio.h>
char* nature(int j){
    int r,e=0,o=0;
    while(j>0){
        r=j%10;
        if(r%2==0) e++;
        else o++;
        j/=10;
    }
    if(o==0) return "Even";
    else if(e==0) return "Odd";
    else return "Mixed";
}
int main(){
    int a;
    scanf("%d",&a);
    printf(nature(a));
}
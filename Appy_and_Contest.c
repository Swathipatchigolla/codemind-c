#include<stdio.h>
int main(){
    int t,n,a,b,k,i,c;
    scanf("%d",&t);
    while(t){
        c=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(i=1;i<=n;i++){
            if((i%a==0&&i%b!=0)||(i%a!=0&&i%b==0)){
                c++;
            }
            if(c>=k) {
                printf("Win
");
                break;
            }
        }
        if(c<k) printf("Lose
");
        t--;
    }
}
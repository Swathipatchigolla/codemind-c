#include<stdio.h>
/*int dba(int x,int y){
    if(x%y==0) return 1;
    else return 0;
}
int dbb(int x,int y){
    if(x%y==0) return 1;
    else return 0;
}*/
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
            /*else if(dba(i,a)==0&&dbb(i,b)==1){
                c++;
            }
            if(dba(i,a)==1&&dbb(i,b)==1){
                c=c;
            }*/
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
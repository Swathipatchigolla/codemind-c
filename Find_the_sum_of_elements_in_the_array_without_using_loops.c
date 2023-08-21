#include<stdio.h>
#include<stdlib.h>
int n,s=0;
int sum(int arr[],int n){
    if(n<0) return 0;
    else return arr[n]+sum(arr,n-1);
}
int arr[30];
int main(){
    int i;
    scanf("%d",&n);
    if(n<=30&&n>=1){
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        s=sum(arr,n-1);
        printf("%d",s);
    }
    else{
        printf("Enter a Valid Number");
    }
}
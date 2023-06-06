#include<stdio.h>
int fibo(int);
int main()
{
	int n,i=0;
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d ",fibo(i));
		i++;
	}
	return 0;
}
int fibo(int f)
{
	if((f==0)||(f==1))
	return f;
	else
	return (fibo(f-1)+fibo(f-2));
}
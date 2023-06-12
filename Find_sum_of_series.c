#include<stdio.h>
int main()
{
	float i,r,s;
	scanf("%f",&r);
	s=0;
	for(i=1;i<=r;i++)
	{
		s=s+1/i;
	}
	printf("%.2f",s);
}
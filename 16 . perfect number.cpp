#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	sum=1;
	for(i=1;i<n;i++)
	if(n%i==0)
	sum=sum+i;
	if(sum==n)
	printf("it is a perfect number");
	else
	printf("it is not a perfect number");
	return 0;
}

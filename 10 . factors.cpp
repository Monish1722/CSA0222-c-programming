#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	printf("number of factors for %d is %d",n,count);
	return 0;
}

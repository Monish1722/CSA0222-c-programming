#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n !=0)
	{
		i=n%10;
		sum=sum*10+i;
		n/=10;
	}
	printf("reverse a number is %d",sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int i,n,sum=0,original;
	printf("enter the number:");
	scanf("%d",&n);
	while(n !=0)
	{
		i=n%10;
		sum=sum*10+i;
		n/=10;
	}
	if(original=sum)
	printf("it is a palindrome:");
	else
	printf("it is a not a palindrome:");
	return 0;
}

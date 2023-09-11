#include<stdio.h>
int main()
{
	int n,i,even_sum=0,odd_sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			even_sum=even_sum+i;
		}
		else
		{
			odd_sum=odd_sum+i;
		}
	}
		printf("sum of all odd numbers is %d\n",odd_sum);
		printf("sum of all even numbers is %d\n",even_sum);
		return 0;
	
}

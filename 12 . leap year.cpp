#include<stdio.h>
int main()
{
	int n;
	printf("enter the year:\n");
	scanf("%d",&n);
	if(n%4==0)
	 printf("it is a leap year:\n");
	else if(n%400==0)
	printf("it is a leap year:\n");
	else
	printf("it is not a not a leap year:\n");
	return 0;
}

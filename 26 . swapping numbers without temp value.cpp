#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("before swapping %d",a);
	printf("after swapping %d",b);
	return 0;
}

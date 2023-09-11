#include<stdio.h>
#include<math.h>
int main()
{
	int num,m;
	float n;
	printf("enter the number:");
	scanf("%d",&num);
	n=sqrt(num);
	m=n;
	if(m*m==num)
	printf("it is aperfect square");
	else
	printf("it is not a perfect square");
	return 0;
}

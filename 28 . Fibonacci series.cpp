#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	scanf("%d",&n);
	printf("fibnoncci series=%d%d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	return 0;
}

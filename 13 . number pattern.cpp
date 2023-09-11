#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the no.of rows:");
	scanf("%d",&n);
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}


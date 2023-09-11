#include<stdio.h>
int main()
{
	int m,n,k,i;
	printf("enter the number of m,n,k");
	scanf("%d%d%d",&m,&n,&k);
	for(i=m;i<=n;i=i+(k+1))
	{
		printf("%d\n",i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n); 
	int sum=1;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	printf("%d factorial =%d",n,sum);
	return 0;
}

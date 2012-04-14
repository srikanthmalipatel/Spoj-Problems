#include<stdio.h>

int main()
{
	int a,d,n,t;
	scanf("%d",&t);
	while(t--)
	{
		int sum = 0;
		scanf("%d%d%d",&n,&a,&d);
		sum += a*n;
		sum += ((n*(n-1))/2)*d;
		printf("%d\n",sum);
	}
	return 0;
}

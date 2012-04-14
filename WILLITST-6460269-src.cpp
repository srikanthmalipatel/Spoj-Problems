#include<stdio.h>


int main()
{
	long long int n;
	scanf("%lld",&n);
	while(n && n != 1)
	{
		if(n %2 == 0) n = n/2;
		else
		{
			printf("NIE\n");
			return 0;
		}
	}
	printf("TAK\n");
	return 0;
}
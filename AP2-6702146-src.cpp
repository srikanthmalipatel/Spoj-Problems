#include<stdio.h>
#include<iostream>

typedef long long LL;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		LL x,y,z,a,d,n,term;
		scanf("%lld%lld%lld",&x,&y,&z);
		n = (2*z)/(x+y);
		d = (y-x)/(n-5);
		a = x-(2*d);
		term = a;
		printf("%lld\n",n);
		for(int i = 0 ; i < n ; i++)
		{
			printf("%lld ",term);
			term += d;
		}
		printf("\n");
	}
	return 0;
}
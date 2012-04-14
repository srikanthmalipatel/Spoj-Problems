#include<stdio.h>
extern long long int gcd (long long int a , long long int b);

int main()
{
	long long int w,h,n,gc,i;
	scanf("%lld%lld",&w,&h);
	while(w!=0&&h!=0)
	{
		n = w*h;
		gc = gcd(w,h);
		n = n/gc;
		n = n/gc;
		printf("%lld\n",n);
		scanf("%lld%lld",&w,&h);
	}
	return 0;
}


long long int gcd (long long int a , long long int b)
{
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);	
}
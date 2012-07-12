#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int gcd(int a, int b)
{
  int c = a % b;
  while(c != 0)
  {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int ans;
		if(a > b) 
			ans = a - b;
		else
			ans = b - a;
		if (a < 0) a = a * (-1);
		if (b < 0) b = b*(-1);
		ans = ans/gcd(a,b);
		printf("%d\n",ans);
	}
	return 0;
}
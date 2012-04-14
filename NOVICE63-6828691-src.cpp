#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;

LL dp[66][33];

LL nCr(LL n, LL r)
{
    if(n==r) return dp[n][r] = 1;
    if(r==0) return dp[n][r] = 1;
    if(r==1) return dp[n][r] = (LL)n;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}


LL digits[70];

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		LL N,tmp,count = 0;
		scanf("%lld",&N);
		tmp = N;
		while(tmp > 1)
		{
			tmp = tmp>>1;
			count++;
		}
		//printf("count %d\n",count);
		digits[0] = 0;
		digits[1] = 1;
		digits[2] = 1;
		for(LL i = 3 ; i <= count ; i++)
		{
			if(i%2 == 1) digits[i] = digits[i-1];
			else 
			{
				LL spcNo = nCr(i-1,i/2);
				digits[i] = digits[i-1] + spcNo;
			}
		}
		printf("%lld\n",digits[count]);
	}
	return 0;
}



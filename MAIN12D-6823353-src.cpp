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

int gcd(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}



int main() {
	int t,caseNo = 1;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,num;
		scanf("%d%d",&n,&m);
		int max = 0;
		for(int i = 0 ; i < m ; i++) 
		{
			scanf("%d",&num);
			if(max < num) max = num;
		}
		max = n-max;
		if(max == 0) printf("Case #%d: 0/1\n",caseNo++);
		else if(max == n || m == 0) printf("Case #%d: 1/1\n",caseNo++);
		else
		{
			int tmp = gcd(max,n);
			//printf("tmp %d\n",tmp);
			max = max/tmp;
			n = n/tmp;
			printf("Case #%d: %d/%d\n",caseNo++,max,n);
		}
	}
	return 0;
}

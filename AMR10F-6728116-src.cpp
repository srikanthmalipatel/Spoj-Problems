#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <deque>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{	
		int N,A,D;
		scanf("%d%d%d",&N,&A,&D);
		int res = (N-1)*D;
		res += 2*A;
		res *= N;
		res /= 2;
		printf("%d\n",res);
	}
	return 0;
}
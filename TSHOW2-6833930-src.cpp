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
vector<int> lDig;
vector<int>::iterator it;

void Fibonacci()
{
	lDig.push_back(-1);
	lDig.push_back(0);
	lDig.push_back(1);
	for(int i = 3 ; i <= 60 ; i++) lDig.push_back((lDig[i-1]+lDig[i-2])%10);
	return ;
}

int main() {
	int T;
	scanf("%d",&T);
	Fibonacci();
	while(T--)
	{
		LL N;
		scanf("%lld",&N);
		N = N%60;
		if(N == 0) printf("%d\n",lDig[60]);
		else printf("%d\n",lDig[N]);
	}
	return 0;
}

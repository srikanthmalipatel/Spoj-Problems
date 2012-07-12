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

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		LL N;
		scanf("%lld",&N);
		int flag = 0;
		if(N == 0) { printf("Akash\n"); continue; }
		while(1)
		{
			if(N%2 == 1) N = N-1;
			else N = N/2;
			if(N == 0) break;
			if(flag == 0) flag = 1;
			else flag = 0;
		}
		if(flag == 0) printf("Aayush\n");
		else printf("Akash\n");
	}
	return 0;
}

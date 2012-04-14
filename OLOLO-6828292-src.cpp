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
	LL N, num = 0, res, inp;
	scanf("%lld",&N);
	for(int i = 0 ; i < N ; i++)
	{
		scanf("%lld",&inp);
		num ^= inp;
	}
	printf("%lld\n",num);
	return 0;
}

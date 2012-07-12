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

int mod(int a)
{
	if(a<0) return (-a);
	else return a;
}

int main() {
	int C;
	scanf("%d",&C);
	while(C--)
	{
		int n1;
		scanf("%d",&n1);
		int a[n1];
		for(int i = 0 ; i < n1 ; i++)
			scanf("%d",&a[i]);
		int n2;
		scanf("%d",&n2);
		int b[n2];
		for(int i = 0 ; i < n2 ; i++)
			scanf("%d",&b[i]);
		sort(a,a+n1);
		sort(b,b+n2);
		int min1 = 1000000;
		for(int i = 0 ; i < n1 ; i++)
			for(int j = 0 ; j < n2 ; j++)
			{
				if(min1 > mod(a[i]-b[j])) min1 = mod(a[i]-b[j]);
			}
		printf("%d\n",min1);
	}
	return 0;
}

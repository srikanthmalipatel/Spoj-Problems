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
	
bool dec_order (int i,int j) { return (i>j); }

using namespace std;

int main() {
	int N, num;
	vector<int> proxy;
	vector<int>::iterator it;
	scanf("%d",&N);
	for(int i = 0 ; i < N ; i++) { scanf("%d",&num); proxy.push_back(num);}
	sort(proxy.begin(),proxy.end(),dec_order);
	int count = 0 , req = N;
	for(it = proxy.begin(); it != proxy.end() ; ++it)
	{
		if(req <= 0) break;
		req -= (*it+1);
		count++;
	}
	printf("%d\n",count);
	return 0;
}

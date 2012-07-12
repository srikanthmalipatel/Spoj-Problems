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

int main() {
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		int flag = 0;
		string mystring;
		cin >> mystring ;
		for(int i = 0 ; i < mystring.length() ; i++)
		{
			if(mystring[i] == 'D') { flag = 1; break; }
		}
		if(flag == 0) printf("Possible\n");
		else  printf("You shall not pass!\n");
	}
	return 0;
}

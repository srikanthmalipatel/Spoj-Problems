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
	int n;
	char arr[103][103];
	while(1)
	{
		scanf("%d",&n);
		if(n == 0) break;
		int row = 0;
		for(int i = 0 ; i < n ; i++)
		{
			string s;
			cin >> s;
			int k = 0;
			for(int j = 0 ; j < n ; j++)
			{
				arr[row][k] = arr[row][k+1] = s[j];
				arr[row+1][k] = arr[row+1][k+1] = s[j];
				k += 2;
			}
			row += 2;
		}
		for(int i = 0 ; i < 2*n ; i++)
		{
			for(int j = 0 ; j < 2*n ; j++)
				cout << arr[i][j];
			cout << endl;
		}
	}

	return 0;
}

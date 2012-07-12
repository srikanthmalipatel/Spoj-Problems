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
	string word;
	cin >> word;
	int count = 0;
	for(int i = 0 ; i < word.length() ; i++)
	{
		char c = tolower(word[i]);
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
	}
	printf("%d\n",count);
	return 0;
}

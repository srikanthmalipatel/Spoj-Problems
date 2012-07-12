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

#define FOR(I,A,B) for(int I= (A); I<(B); ++I)
#define REP(I,N) FOR(I,0,N)
#define ALL(A) (A).begin(), (A).end()
#define DEBUG 0

typedef long long int LL;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main ()
{
	int T;
	cin >> T;
	REP( i, T )
	{
		int N;
		cin >> N;
		LL life = 1LL;
		LL lifeNeeded = 1LL;
		int n;
		REP( j, N )
		{
			cin >> n;
			life += n;
			// cout << "life: " << life << endl;
			if( life <= 0LL )
			{
				//cout << "life below or equal to zero" << endl;
				lifeNeeded += abs( life-1LL );
				life += abs( life-1LL );
				//cout << "new life: " << life << endl;
				//cout << "lifeNeeded: " << lifeNeeded << endl;
			}
		}
		cout << "Scenario #" << i+1 << ": " << lifeNeeded << endl;
	}
}
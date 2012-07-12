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
bool P = true;
map<int,set<int> > students;
int N, L;
cin >> N >> L;
REP( j, L )
{
int I, C;
cin >> I >> C;
pair<set<int>::iterator,bool> result = students[I].insert( C );
if( result.second == false ) // duplicate
P = false;
}
cout << "Scenario #" << i+1 << ": ";
cout << ( ( P ) ? "possible" : "impossible" ) << endl;
}
}
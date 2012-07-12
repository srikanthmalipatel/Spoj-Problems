#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <deque>
#include <stack>

using namespace std;

#define FOR(I,A,B) for(int I= (A); I<(B); ++I)
#define REP(I,N) FOR(I,0,N)
#define ALL(A) (A).begin(), (A).end()
#define DEBUG 0

typedef long long int LL;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

string spaces( int N )
{
string S = "";
REP( i, N )
S += ' ';
return S;
}

void printDiamond( int N )
{
int L = (N-1)/2;
stack<string> D;
string first = spaces( L )+"*";
cout << first << endl;
D.push( first );
for( int i=L-1; i>0; --i )
{
string outSpace = spaces( i );
string inSpace = spaces( L-i-1 );
string S = outSpace + "*" + inSpace + "*" + inSpace + "*" + outSpace;
cout << S << endl;
D.push( S );
}
REP( i, N )
cout << "*";
cout << endl;
while( !D.empty() )
{
string S = D.top();
D.pop();
cout << S << endl;
}
}

int main ()
{
int N;
cin >> N;
if( N == 1 )
cout << "*" << endl;
else
printDiamond( N );
}
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iterator>
#include <utility>

using namespace std;

#define FOR(I,A,B) for(int I= (A); I<(B); ++I)
#define REP(I,N) FOR(I,0,N)
#define ALL(A) (A).begin(), (A).end()
#define DEBUG 0

typedef long long int LL;

struct P {
int N;
int O;
P( int n, int o ) : N(n), O(o) {}
};

bool operator <( P const& A, P const& B )
{
return ( A.N > B.N ) ? true : false;
}

int L( set<P> &S )
{
set<P>::iterator it = S.begin();
return it->N;
}

void addToSet( set<P> &K, int X )
{
pair<set<P>::iterator,bool> result;
result = K.insert( P( X, 1 ) );
if( result.second == false )
{
int o = result.first->O;
K.erase( result.first );
K.insert( P( X, o+1 ) );
}
}

void eraseFromSet( set<P> &K, int X )
{
pair<set<P>::iterator,bool> result;
result = K.insert( P( X, 1 ) );
if( result.second == false )
{
int o = result.first->O;
K.erase( result.first );
if( o > 1 )
K.insert( P( X, o-1 ) );
}
}

void printSet( set<P> &S )
{
cout << "S: {" << endl;
set<P>::iterator it = S.begin(), itEnd = S.end();
for( ; it!=itEnd; ++it )
cout << "(" << it->N << "," << it->O << ")" << endl;
cout << "}" << endl;
}

int main ()
{
int n;
cin >> n;
vector<int> A( n );
REP( i, n )
cin >> A[i];
int k;
cin >> k;
set<P> K;
REP( i, k )
{
addToSet( K, A[i] );
}
//printSet( K );
cout << L( K );
for( int i=k; i<n; ++i )
{
addToSet( K, A[i] );
eraseFromSet( K, A[i-k] );
//printSet( K );
cout << " " << L( K );
}
cout << endl;
}
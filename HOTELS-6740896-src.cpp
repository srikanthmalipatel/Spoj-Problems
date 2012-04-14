#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

typedef long long LL;

int maxx( int a, int b )
{
return ( a > b ) ? a : b;
}

int main ()
{
int N, M, s, x;
LL result = 0LL, total = 0LL;
scanf( "%d %d\n", &N, &M );
vector<int> nums;
vector<LL> sums;
bool done = false;
bool sNotFound = false;
s = N-1;
for( int i=0; i<N; ++i )
{
scanf( "%d", &x );
total += x;
if( x == M || total == M)
{
result = M;
done = true;
}
if( x < M && x > result ) result = x;
if( total < M && total > result ) result = total;
if( total > M && !sNotFound)
{
s = i;
sNotFound = true;
}
nums.push_back( x );
sums.push_back( total );
}
if( done )
{
printf( "%lld\n", result );
}
else
{
int i = s, j = 0;
int moveI = i, moveJ = j;
while( i != N-1 || j != N-1 )
{
//cout << "result: " << result << endl;
//cout << "(i,j) = (" << i << "," << j << ")" << endl;
while( j < N && sums[i]-sums[j] > M ) ++j;
result = maxx( result, sums[i]-sums[j] );
if( result == M ) break;
while( i < N && sums[i]-sums[j] <= M ) ++i;
if( j == i ) result = sums[i]-sums[j];
else result = maxx( result, sums[i-1]-sums[j] );
if( result == M ) break;
if( moveI == i && moveJ == j ) break;
else
{
moveI = i;
moveJ = j;
}
}
printf( "%lld\n", result );
}
}
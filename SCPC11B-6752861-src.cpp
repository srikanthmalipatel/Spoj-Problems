#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main ()
{
int S;
while( cin >> S )
{
if( S == 0 )
break;
int t;
vector<int> stops;
for( int i=0; i<S; ++i )
{
cin >> t;
stops.push_back(t);
}
sort( stops.begin(), stops.end() );
int p = 0;
bool done = false;
for( int i=1; i<S; ++i )
{
if( stops[i]-stops[i-1] > 200 )
{
cout << "IMPOSSIBLE" << endl;
done = true;
break;
}
if( i == S-1 )
{
p = 1422 - stops[S-1];
}
}
if( !done )
{
if( 2*p > 200 )
{
cout << "IMPOSSIBLE" << endl;
}
else
{
cout << "POSSIBLE" << endl;
}
}
}
}

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

int main ()
{
int T;
cin >> T;
for( int i=0; i<T; ++i )
{
int N;
cin >> N;
vector<string> left, right;
string englishWord = "", t;
bool leftB = true;
for( int j=0; j<N; ++j )
{
cin >> t;
if( t[0] == '#' && leftB )
left.push_back( t );
else if( t[0] != '#' )
{
leftB = false;
englishWord = t;
}
else
{
right.push_back( t );
}
}
int sR = right.size(), sL = left.size();
for( int j=0; j<sR; ++j )
{
if( j != 0 ) cout << " ";
cout << right[j];
}
if( sR > 0 && englishWord.size() > 0 ) cout << " ";
cout << englishWord;
if( sL > 0 && englishWord.size() > 0 ) cout << " ";
for( int j=0; j<sL; ++j )
{
if( j != 0 ) cout << " ";
cout << left[j];
}
cout << endl;
}
}
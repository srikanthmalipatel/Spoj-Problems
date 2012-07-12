#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>

using namespace std;

#define DEBUG 0

struct Symbol {
char S;
int O;
Symbol( char s ) : S( s ), O( 1 ) {}
Symbol( char s, int o ) : S( s ), O( o ) {}
};

ostream& operator <<( ostream& os, Symbol &ob )
{
os << "(" << ob.S << "," << ob.O << ")";
return os;
}

int main ()
{
string line;
while( getline( cin, line ) )
{
char prev = '@';
int size = line.size();
vector<Symbol> letters;
if( line == "" )
{
cout << endl;
continue;
}
for( int i=0; i<size; ++i )
{
if( line[i] == prev )
{
vector<Symbol>::reverse_iterator it = letters.rbegin();
if( it->O == 9 )
letters.push_back( Symbol( line[i] ) );
else
++it->O;
}
else
{
letters.push_back( Symbol( line[i] ) );
}
prev = line[i];
}
#if DEBUG
for( vector<Symbol>::iterator it = letters.begin(); it!=letters.end(); ++it )
cout << *it << endl;
#endif
bool one = false;
for( vector<Symbol>::iterator it = letters.begin(); it!=letters.end(); ++it )
{
if( it->O != 1 )
{
if( one == true )
{
cout << 1;
one = false;
}
cout << it->O << it->S;
}
else
{
if( one == false )
{
cout << 1;
one = true;
}
if( it->S == '1' )
{
cout << 11;
}
else
{
cout << it->S;
}
}
}
if( one == true )
cout << 1;
cout << endl;
}
}
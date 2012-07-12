#include <iostream>
#include <vector>

#define DEBUG 0

using namespace std;

void calcWinner( int &a, int &b, int &c, int &xWins, int &oWins )
{
int r = a*b*c;
if( r == 1 )
++xWins;
if( r == 8 )
++oWins;
}

int main ()
{
int T;
cin >> T;
for( int i=0; i<T; ++i )
{
string game="", line;
for( int j=0; j<3; ++j )
{
cin >> line;
game += line;
}
#if DEBUG
cout << game << endl;
#endif
int numXs = 0, numOs = 0, numEs = 0;
vector<int> newBoard;
for( string::iterator it = game.begin(); it!=game.end(); ++it )
{
if( *it == 'X' )
{
newBoard.push_back( 1 );
++numXs;
}
else if ( *it == 'O' )
{
newBoard.push_back( 2 );
++numOs;
}
else
{
++numEs;
newBoard.push_back( 0 );
}
}
#if DEBUG
cout << numXs << " " << numOs << " " << numEs << endl;
#endif
if( numXs == numOs || numXs == numOs+1 )
{
// calculate winners
int xWins = 0, oWins = 0;
calcWinner( newBoard[0], newBoard[1], newBoard[2], xWins, oWins );
calcWinner( newBoard[3], newBoard[4], newBoard[5], xWins, oWins );
calcWinner( newBoard[6], newBoard[7], newBoard[8], xWins, oWins );
calcWinner( newBoard[0], newBoard[3], newBoard[6], xWins, oWins );
calcWinner( newBoard[1], newBoard[4], newBoard[7], xWins, oWins );
calcWinner( newBoard[2], newBoard[5], newBoard[8], xWins, oWins );
calcWinner( newBoard[0], newBoard[4], newBoard[8], xWins, oWins );
calcWinner( newBoard[2], newBoard[4], newBoard[6], xWins, oWins );

if( xWins > 0 && oWins > 0 )
{
cout << "no" << endl;
continue;
}
if( xWins > 0 )
{
if( numXs > numOs )
cout << "yes" << endl;
else
cout << "no" << endl;
continue;
}
if( oWins > 0 )
{
if( numXs == numOs )
cout << "yes" << endl;
else
cout << "no" << endl;
continue;
}
cout << "yes" << endl;
}
else
cout << "no" << endl;
}
}
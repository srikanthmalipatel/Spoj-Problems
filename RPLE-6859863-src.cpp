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




int main ()
{
	int T,caseNo = 1;
	scanf("%d",&T);
	while(T--)
	{
		int N, R;
		scanf("%d%d",&N,&R);
		bool spying = true;
		set<int> S, C;
		REP( j, R )
		{
			int R1, R2;
			scanf("%d%d",&R1,&R2);
			C.insert( R1 );
			S.insert( R2 );
		}
		REP( j, N )
		{
			if( C.count( j ) > 0 && S.count( j ) > 0 )
			{
				spying = false;
				break;
			}
		}
		printf("Scenario #%d:",caseNo++);
		if( spying )
		printf(" spying\n");
		else
		printf(" spied\n");
	}
}
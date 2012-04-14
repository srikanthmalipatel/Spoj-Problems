#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
 
#define TI freopen("test.inp","rt",stdin)
 
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) for(int i=0;i<n;i++)
 
#define MAX 20000
 
int cnt=0,N,M,t,FREE[MAX];
 
vector<vector<int> > F;
 
void decode ()
{
        int u,v;
        // N so node 
        // M so canh
        scanf ("%d%d\n",&N,&M);
        FOR (i,0,N){
                F.push_back (vector <int>());
        }
        
        FOR (u,0,N){
                F[u].push_back (0);
        }
        FOR (u,0,N){
                F[u].push_back (u);
        }
        FOR (i,1,M){               
                scanf ("%d%d\n",&u,&v);
                F[u].push_back(v);
        }
}
void result ()
{
        FOR (i,1,N)
            if (FREE[i]==0) {cout<<"NO"; return ;}
        cout<<"YES";
}
 
 
void DFS (int u)
{
        int v;
        FORD (i,F[u].size()-1,1)
        {
                v=F[u][i];
                if (FREE[v]==0)
                {
					FREE[v]=1;
                	DFS (v);
				}
        }
}
 
//#include <conio.h>
int main ()
{
//      TI;
        decode ();      
        if (M==N-1){
                DFS (1);
                result ();
        }
        else cout<<"NO";
//    getch ();
    return 0;
}
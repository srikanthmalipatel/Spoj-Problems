#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string.h>

// user defined
#define MAXN 50010
#define MAXIND 8*MAXN
typedef long long ll;
//end


using namespace std;

void initialize(int node, int b, int e, int M[MAXIND], int A[MAXN], int N)
{
	if(b == e) M[node] = b; 
	else
	{
		initialize(2 * node, b, (b + e)/2, M, A, N);
		initialize(2 * node + 1, (b + e)/2 + 1, e, M, A, N);
		if(A[M[2 * node]] >= A[M[2 * node + 1]])
			M[node] = M[2 * node];
		else 
			M[node] = M[2 * node + 1];
	}
}

int query(int node, int b, int e, int M[MAXIND], int A[MAXN], int i, int j)
{
	int p1,p2;
	if(i > e || j < b) return -1;
	if(b >= i && e <= j)
		return M[node];
	else
	{
		p1 = query(2 * node , b , (b + e)/2, M , A, i, j);
		p2 = query(2 * node + 1 , (b + e)/2 + 1 , e, M , A, i, j);
		if(p1 == -1)
			return p2;
		if(p2 == -1)
			return p1;
		if(A[p1] >= A[p2])
			return p1;
		return p2;
	}
}

int main()
{
	int M[MAXIND], N, Q, A[MAXN];
	scanf("%d%d",&N,&Q);
	for(int i = 0 ; i < N ; i++) scanf("%d",&A[i]);
	memset(M,-1,MAXIND);
	initialize(1, 0, N-1, M, A, N);
	int count = 0;
	while(Q--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(A[(a-1)] == A[query(1, 0, N-1, M, A, a-1, b-2)]) count++;
	}
	printf("%d\n",count);
	return 0;
}
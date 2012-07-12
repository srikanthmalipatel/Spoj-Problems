#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<cctype>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
using namespace std;
#define pb push_back
#define pi 3.141592653589793238462643383
 
int dist[50001];
int visited[50001];
int n;
struct node
{
    int i,d;
};
typedef struct node node;
vector<node> v[50001];
int bfs(int start){
    queue<int> q;
    q.push(start);
    int i,j;
    for(i=0;i<=n;i++){
        visited[i]=0;
        dist[i]=0;
    }
    visited[start]=1;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(i=0;i<v[temp].size();i++){
            if(visited[v[temp][i].i]==0){
                visited[v[temp][i].i]=1;
                dist[v[temp][i].i]+=dist[temp]+v[temp][i].d;
                q.push(v[temp][i].i);
            }
        }
    }
    return int(max_element(dist+1,dist+n+1)-dist);
}
int main()
{
 int i,j,t,u1,v1,d;
 node temp;
 scanf("%d",&t);
 while(t>0){
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            v[i].clear();
        for(i=1;i<=n-1;i++){
                scanf("%d%d%d",&u1,&v1,&d);
                temp.i =  v1;
                temp.d = d;
                v[u1].pb(temp);
                temp.i = u1;
                v[v1].pb(temp);
        }
        int start = bfs(1);
        int ans = bfs(start);
        printf("%d\n",dist[ans]);
        t--;
    }
     
         
         
}
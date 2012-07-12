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
#include<bitset>
using namespace std;
#define pb push_back
#define pi 3.141592653589793238462643383
#define LL long long
#define MOD 1000000007
//LL M[2][2],ans[2][2];
void mult(LL ans[2][2],LL M[2][2]){
    LL L[2][2];
    int i,j,k;
    for(i=0;i<2;i++){
  for(j=0;j<2;j++){
            L[i][j]=0;
   for(k=0;k<2;k++){
    L[i][j] =(L[i][j] + (ans[i][k]) * (M[k][j])%MOD)%MOD;
            }
        }
 }
 for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        ans[i][j] = L[i][j];
}
LL fib(int n){
 int temp = 1;
 int i,j,k;
 LL ans[2][2] = {{1,0} , {0,1}};
 LL M[2][2] = {{0,1} , {1,1}};
    while(n > 0){
  if(n & temp){
   n -= temp;
   mult(ans,M);
         
         
        }
  temp <<= 1;
  mult(M,M);
 }
 return ans[0][1] % MOD;
}
LL sum(int n){
    return fib(n+2) - 1;
}
int main()
{
 int n,m,t;
 LL ans;
 cin>>t;
    while(t>0){
  cin>>n>>m;
  ans = (sum(m) - sum(n-1))%MOD;
  if(ans<0)
    ans = ans+MOD;
  ans = ans % MOD;
  cout<<ans<<endl;
  t--;
 }
}
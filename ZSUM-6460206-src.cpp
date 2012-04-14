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
#define LL  long long
#define pi 3.141592653589793238462643383
#define MOD 10000007
int mult( LL a, LL b){
    LL temp = 1,ans = 1;
    while(b>0){
        if(b & temp){
            ans = (ans * a) % MOD;
            b = b - temp;
        }
        temp = temp << 1;
        a = (a * a) % MOD;
    }
    return ans % MOD;
}
int main()
{
 LL n,k;
 while(1){
        scanf("%lld%lld",&n,&k);
        if(n == 0 && k == 0)
            break;
        int ans = (2*mult(n-1,k)) % MOD  +  (2*mult(n-1,n-1)) % MOD  +  mult(n,k) % MOD +  mult(n,n) % MOD;
        ans = ans % MOD;
        printf("%d\n",ans);
    }
 
}
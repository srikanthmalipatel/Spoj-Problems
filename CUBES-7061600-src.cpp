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
int main()
{
 int i,j;
 int a,b,c,d,sum;
 vector<int> v(101);
 vector<int>::iterator it;
 for(i=1;i<=100;i++)
    v[i] = i*i*i;
 for(a=2;a<=100;a++){
        for(b=2;b<=a-1;b++){
            for(c=b+1;c<=a-1;c++){
                sum =  v[b]+v[c];
                sum = v[a]-sum;
                if(binary_search(v.begin()+1,v.end(),sum)){
                    it = lower_bound(v.begin()+1,v.end(),sum);
                    d = (int)(it - v.begin());
                    if(d<c)
                        continue;
                    vector<int> ans;
                    ans.pb(b);
                    ans.pb(c);
                    ans.pb(d);
                    sort(ans.begin(),ans.end());
                    printf("Cube = %d, Triple = (%d,%d,%d)\n",a,ans[0],ans[1],ans[2]);   
                }
            }
        }
    }
    
 
}
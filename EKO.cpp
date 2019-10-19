#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
long long int fn(long long int x,long long int n)
{
    long int c=0;
    for(long long int i=0;i<n;i++)
    {
        if(x<a[i])
            c+=(a[i]-x);
    }
return c;
}
int main()
{
    long long int n;
    long long int m,maxi=0;
    scanf("%lld%lld",&n,&m);
    for(long long int i=0;i<n;i++)
        scanf("%lld",&a[i]),maxi=max(maxi,a[i]);
    long long int low=maxi-1,high=0,mid;
    while(high<=low)
    {
        mid=high+((low-high)/2);
       // cout<<mid<<" "<<fn(mid,n)<<endl;
        if(fn(mid,n)==m)
        {
            printf("%lld",mid);
            break;
        }
        else if(fn(mid,n)>m)
            high=mid+1;
        else
            low=mid-1;
    }
}

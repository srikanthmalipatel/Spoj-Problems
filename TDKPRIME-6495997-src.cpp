#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
#define Lim 86029000
vector<bool> b((Lim>>1)+100);
int p[5000100];
 
void prime()
	{
		for(int i=3;i<=9257;i+=2) if(!b[(i-3)>>1]) for(int j=i*i;j<Lim;j+=i) if(j&1)  b[(j-3)>>1]=1;
		p[0]=2;
		int cnt=1;
		for(int i=0;2*i<Lim;i++) if(!b[i]) p[cnt++]=2*i+3;
		/*for(int i=0;i<10;i++) cout<<p[i]<<" ";
		cout<<endl;
		for(int i=cnt-10;i<cnt;i++) cout<<p[i]<<" ";
		cout<<cnt<<endl;*/

	}


int main()
	{
		prime();
		int k,q;
		for(scanf("%d",&q);q>0;q--) scanf("%d",&k) , printf("%d\n",p[k-1]);
	}

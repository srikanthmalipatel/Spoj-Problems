#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
#define Lim 1000001
using namespace std;
bool c[Lim];
vector<int> v;

void iscube()
     {
          
          for(int i=2;i*i*i<Lim ; i++) 
          {
            int k = i*i*i;
            for(int j = k ; j<Lim ; j+=k) c[j] = 1 ;
          } 
         
         v.push_back(1);
         for(int i=1;i<Lim ; i++) if (!c[i]) v.push_back(i);     
         //for(int i=1;i<20;i++) cout<<v[i]<<" ";cout<<endl;  
     }
     
     int main()
     {
         iscube();
         int t,k,x=1;
         for(scanf("%d",&t);t>0;t--)
         {
            scanf("%d",&k);
            if(k==1) { printf("Case %d: 1\n", x++) ; continue;} 
            if(c[k]) printf("Case %d: Not Cube Free\n", x) ;
            else cout<<"Case "<<x<<":"<<" "<<lower_bound(v.begin(),v.end(),k)-v.begin()<<endl;                           
            x++;                        
         }    
     }



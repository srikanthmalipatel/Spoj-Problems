 #include<iostream>
 #include<cstdio>
 #include<map>
 #include<bitset>

 using namespace std;

 #define max 1000000

 bitset <max+1> p;
 int size;
 int prime[79000];

 void sieve(){
 size=0;
 long long i,j;
 p.set(0,1);
 p.set(1,1);
 prime[size++]=2;
 for(i=3;i<max+1;i=i+2){
    if(!p.test(i)){
        prime[size++]=i;
        for(j=i;j*i<max+1;j++){
            p.set(j*i,1);
        }
    }
   }
   }

  int main()
  {
sieve();

int t;
scanf("%d",&t);

for(int w=0;w<t;w++){
    int n;
    scanf("%d",&n);
    long long a[n];

    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);

    map<long long,int> m;
    map<long long,int> :: iterator it;
    for(int i=0;i<n;i++){
        long long num=a[i];
        long long pp;
        for(int j=0;(j<size) && ((pp=prime[j])*pp <= num) ;j++){
            int c=0;
            for(;!(num%pp);num /= pp)
                c=1;
            if(c)
                m[pp]=1;
        }

        if((num>0)&&(num!=1)){
            m[num]=1;   
        }
    }
    printf("Case #%d: %d\n",w+1,m.size());
    for(it=m.begin();it!=m.end();it++){
        printf("%lld\n",(*it).first);   
    }

   }

return 0;
 }

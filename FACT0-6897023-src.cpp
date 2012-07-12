#include<cstdio>
typedef unsigned long long ull;
ull tmp;
int main(void)
{
   
    while(~scanf("%llu",&tmp))
    {
        ull i=2;
        int ile,co;
        while(i*i<=tmp)
        {
            co=ile=0;
            if(tmp%i==0)
            {
                co=i;
                while(tmp%i==0)
                {
                    ++ile;
                    tmp/=i;
                }
                printf("%d^%d ",co,ile);
            }
            if(tmp==1)break;
            ++i;
        }
        if(tmp>1)printf("%llu^1",tmp);
        puts("");
    }
return 0;
}
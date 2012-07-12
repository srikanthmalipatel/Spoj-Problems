#include<stdio.h>
#include<assert.h>
#define p(n) printf("n=%d\n",n);
typedef unsigned long long int ULL;
ULL power(ULL num)
{
    ULL n = 1;

    while (n < num)
        n <<= 1;

    return n-num;
}
int main()
{
    ULL G,T,A,D;
    scanf("%llu%llu%llu%llu",&G,&T,&A,&D);
    while(G!=-1 && T!=-1 && A!=-1 && D!=-1){
        ULL matches=0;
        matches+=(T*(T-1))/2;
        matches=matches*G;
        ULL knockout=A*G;
        ULL extra=power(knockout+D);
        if(extra==0)
        {
            knockout+=D-1;
            printf("%llu*%llu/%llu+%llu=%llu+%llu\n",G,A,T,D,knockout+matches,extra);
        }
        else
        {
            //nearest pow
            knockout=knockout+D+extra-1;
             printf("%llu*%llu/%llu+%llu=%llu+%llu\n",G,A,T,D,knockout+matches,extra);
        }
        scanf("%llu%llu%llu%llu",&G,&T,&A,&D);
    }
    return 0;
}

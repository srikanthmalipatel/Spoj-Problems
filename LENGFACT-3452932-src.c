#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    long long int a;
    while(t--)
    {
        scanf("%lld",&a);
        if(a==0||a==1||a==2) printf("1\n");
        else printf("%lld\n",(long long int)floor((log(2*acos(-1)*a)/2+a*(log(a)-1))/log(10))+1);
    }
    return 0;
}

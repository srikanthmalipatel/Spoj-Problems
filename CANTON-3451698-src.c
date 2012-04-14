#include<stdio.h>

int main()
{
    int t,i,j,num,den;
    long int n,sum;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%ld",&n);
        sum = 0;
        j = 1;
        while(sum<n)
        {
            sum+=j;
            j++;
        }
        j=j-1;
        if(j%2==0)
        {
            num = j;
            den = 1;
            sum = sum - n;
            num = num - sum;
            den = den + sum;
            printf("TERM %d IS %d/%d\n",n,num,den);
        }
        else if(j%2!=0)
        {
           num = 1;
           den = j;
           sum = sum-n;
           //printf("%d\n",sum);
           num = num+sum;
           den = den-sum;
           printf("TERM %d IS %d/%d\n",n,num,den);
        }
    }
    return 0;
}

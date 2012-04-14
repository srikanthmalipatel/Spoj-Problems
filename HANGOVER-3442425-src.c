#include<stdio.h>

int main()
{
    float sum,k,t;
    int i;
    scanf("%f",&k);
    while(k!=0.00)
    {
        sum = 0;
        i = 1;
        while(sum<=k)
        {
            t=(float)1/(i+1);
            sum+=t;
            i++;
        }
        printf("%d card(s)\n",i-1);
        scanf("%f",&k);
    }
    return 0;
}

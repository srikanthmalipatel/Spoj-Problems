#include<stdio.h>
#define MAX 27
int main()
{
    char a[MAX]={0,'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n,i,j,sum;
    while(scanf("%d",&n)!= EOF)
    {
        sum = 0;
        i=1;
        while(sum<n)
        {
            sum = sum+i;
            i++;
        }
        i=i-1;
        if(i%26!=0) printf("TERM %d IS %c\n",n,a[i%26]);
        else printf("TERM %d IS Z\n",n);
    }
    return 0;
}

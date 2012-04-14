#include<stdio.h>


int main()
{
    int n,sqr;
    scanf("%d",&n);
    while(n != 0)
    {
        sqr = n*(n+1)*((2*n)+1)/6;
        printf("%d\n",sqr);
        scanf("%d",&n);
    }
    return 0;
}

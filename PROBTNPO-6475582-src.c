#include<stdio.h>


int main()
{
    long int maxC = 0,i,j,n,tempC,itr,count,i1,j1;
    while(scanf("%ld %ld", &i, &j) != EOF)
    {
        maxC = 0;
        if(i > j)
        {
            i1 = j;
            j1 = i;
        }
        else
        {
            i1 = i;
            j1 = j;
        }
        for(itr = i1 ; itr <= j1 ; itr++)
        {
            n = itr;
            count = 0;
            while ( n != 1)
            {
                if(n%2 == 0)
                    n = n/2;
                else
                    n = 3*n+1;
                count++;
            }
            tempC = count + 1;
            if(tempC >= maxC)
                maxC = tempC;
        }
        printf("%ld %ld %ld\n",i,j,maxC);
    }
    return 0;
}
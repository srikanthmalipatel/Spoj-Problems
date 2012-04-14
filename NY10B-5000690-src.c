#include<stdio.h>
#include<string.h>


int main()
{
	int n,l,b,x,y,c,i,l1,l2,j,sum;
	scanf("%d",&n);
	while(n--)
	{
		sum = 0;
		scanf("%d %d %d %d",&l,&b,&x,&y);
		j = 1;
		while(x != 0 || y != 0)
		{
			if(x == 0)
				sum += ((y%b)%b)*j;
			else if(y == 0)
				sum += ((x%b)%b)*j;
			else 
				sum += (((x%b)+(y%b))%b)*j;
			x = x/b;
			y = y/b;
			j *= b;
		}
		printf("%d %d\n",l,sum);
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int n,s,i;
	scanf("%d",&n);
	while(n!=0)
	{
		s = 5;
		if(n >= 2)
		{
			for(i = 0 ; i < n-1 ; i++)
			{
				s = s + (7+(3*i));
			}
		}
		printf("%d\n",s);
		scanf("%d",&n);
	}
	return 0;
}
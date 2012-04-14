#include<stdio.h>

int main()
{
	int arr[6];
	int pSlvd,tTime,count = 1;
	while(1)
	{
		int i;
		for(i = 0 ; i < 6 ; i++)
		{
			if(scanf("%d",&arr[i]) == EOF) return 0; 
		}
		pSlvd = 0, tTime = 0;
		for(i = 0 ; i < 3 ; i++)
		{
			if(arr[i] > 0) 
			{
				pSlvd++;
				tTime += (arr[i] + ((arr[3+i]-1)*20*60));
			}
		}
		printf("team %d: %d, %d\n",count,pSlvd,tTime);
		count++;
	}
	return 0;
}

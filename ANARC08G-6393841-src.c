#include<stdio.h>

int DCrdt[1000][1000];
int Net[1000];

int main()
{
	int N_Banks;
	int i, j, k, Net_Sum, Sum;
	scanf("%d",&N_Banks);
	k = 1;
	while(N_Banks != 0)
	{
		for(i = 0 ; i < N_Banks ; i++) Net[i] = 0;
		
		for(i = 0 ; i < N_Banks ; i++)
			for(j = 0 ; j < N_Banks ; j++) DCrdt[i][j] = 0;
		
		Sum = 0;

		for(i = 0 ; i < N_Banks ; i++)
		{
			Net_Sum = 0;
			for(j = 0 ; j < N_Banks ; j++)
			{
				scanf("%d",&DCrdt[i][j]);
				Net_Sum += DCrdt[i][j];
			}
			Sum += Net_Sum;
			Net[i] = Net_Sum;
		}
		
		for(i = 0 ; i < N_Banks ; i++)
		{
			Net_Sum = 0;
			for(j = 0 ; j < N_Banks ; j++)
			{
				Net_Sum += DCrdt[j][i];
			}
			if(Net_Sum >= Net[i]) Net[i] = Net_Sum - Net[i];
			else Net[i] = Net[i] - Net_Sum;
		}
		Net_Sum = 0;
		for(i = 0 ; i < N_Banks ; i++)
			Net_Sum += Net[i];
		printf("%d. %d %d\n",k, Sum, Net_Sum/2);
		scanf("%d",&N_Banks);
		k++;
	}
	return 0;
}

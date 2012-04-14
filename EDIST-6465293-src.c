#include<stdio.h>
#include<string.h>

int dist[2002][2002];

int diff(char i , char j)
{
	if(i == j) return 0;
	else return 1;
}

int min(int i , int j, int k)
{
	if(i <= j)
	{
		if(i <= k) return i;
		return k;
	}
	else
	{
		if(j <= k) return j;
		return k;
	}
}

int main()
{
	int len1,len2,i,j,t;
	char str1[2002];
	char str2[2002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str1);
		scanf("%s",str2);
		len1 = strlen(str1);
		len2 = strlen(str2);
		for(i = 0 ; i <= len1 ; i++)
			for(j = 0 ; j <= len2 ; j++)
				dist[i][j] = 0;
		for(i = 0 ; i <= len1 ; i++)
			dist[i][0] = i;
		for(i = 0 ; i <= len2 ; i++)
			dist[0][i] = i;
		for(i = 1 ; i <= len1 ; i++)
			for(j = 1 ; j <= len2 ; j++)
				dist[i][j] = min(1+dist[i-1][j],1+dist[i][j-1],diff(str1[i-1],str2[j-1])+dist[i-1][j-1]);
		printf("%d\n",dist[len1][len2]);
	}
	return 0;
}











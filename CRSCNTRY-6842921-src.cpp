#include<stdio.h>

int src[2003];
int comp[2003];
int arr[2000][2002]={0};
int lcs(int l1,int l2)
{
	
	
	int i=0,j;
	for(i=0;i<l1;i++)
	{
		arr[0][i]=0;
	}
	for(i=0;i<l2;i++)
	   arr[i][0]=0;
	   
	 for(i=0;i<l1;i++)
	 {
		for(j=0;j<l2;j++)
		{
			if(src[i]==comp[j])
			{
				arr[i+1][j+1]=arr[i][j]+1;
			}
			else if(arr[i][j+1]>=arr[i+1][j])
			{
				arr[i+1][j+1]=arr[i][j+1];
			}
			else
			{
				arr[i+1][j+1]=arr[i+1][j];
			}
		}
	 }
		return arr[l1][l2];
}
int main()
{
	int t,i,j,k;
	int temp;
	int max;
	scanf("%d",&t);
	while(t--)
	{	
		max=0;
		i=0;
		j=0;
		while(1)
		{
			scanf("%d",&temp);
			if(temp==0)
			break;
			src[i++]=temp;
		}
		
		while(1)
		{
		scanf("%d",&temp);
		
		if(temp==0)
		{
			break;
		}
		else
		{
			j=0;
			comp[j++]=temp;
			while(1)
			{
				scanf("%d",&temp);
				if(temp==0)
				break;
				comp[j++]=temp;
			}
			int res=lcs(i,j);
			if(res>max)
			max=res;
		}
		}
		printf("%d\n",max);
	}
	return 0;
}
  
      
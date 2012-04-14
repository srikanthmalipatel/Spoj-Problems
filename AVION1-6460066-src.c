#include<stdio.h>
#include<string.h>

int arr[5];;

int main()
{
	int t = 5,k,i;
	char str[100];
	k = 0;
	while(t--)
	{
		fgets(str,100,stdin);
		for(i = 0 ; i < strlen(str)-2; i++)
		{
			if(str[i] == 'F' && str[i+1] == 'B' && str[i+2] == 'I') arr[k] = 1;
		}
		k++;
	}
	int flag = 0;
	for(i = 0 ; i < 5 ; i++)
	{
		if(arr[i] == 1) 
		{	
			flag = 1;
			printf("%d\n", i+1);
		}
	}
	if(flag == 0) printf("HE GOT AWAY!\n");
	return 0;
}
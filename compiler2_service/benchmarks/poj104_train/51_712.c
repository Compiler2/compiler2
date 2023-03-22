#define NUM_ITER 176968

#include <header.h>

int main_bench()
{
	int n,i,j,m,count[500]={0},max=1;
	for(i=0;i<500;i++)
	{
		count[i]=1;
	}

	char str[501],substr[500][5];
	my_scanf("%d",&n);
	my_scanf("%s",str);
	m=strlen(str);

	for(i=0;i<=m-n;i++)
	{
		for(j=0;j<n;j++)
		{
			substr[i][j]=str[i+j];	
		}
		substr[i][n]='\0';
	}

	for(i=0;i<=m-n;i++)
	{
		for(j=i+1;j<=m-n;j++)
		{
			if(strcmp(substr[i],substr[j])==0)
				count[i]=count[i]+1;
		}
		if(count[i]>max)
			max=count[i];

	}
	
	if(max!=1)
	{

	my_printf("%d\n",max);

	for(i=0;i<=m-n;i++)
	{
		if(count[i]==max)
			my_printf("%s\n",substr[i]);
	}
	}
	else
		my_printf("NO\n");




	return 0;
}

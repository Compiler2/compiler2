#define NUM_ITER 797399

#include <header.h>

int main_bench()
{
	int n,m,i,j;
	char str[1000],str1[1000][20];
	my_scanf("%d",&n);
	my_scanf("%s",str);
	m=strlen(str);
	int index=0;
	for(i=0;i<(m-n+2);i++)
	{
		for(j=0;j<n;j++)
		{
			str1[i][j]=str[i+j];
		}
		index=i;
	}
	for(i=0;i<index;i++)
		str1[i][n]=0;
	int num[1000]={0},max;
	for(i=0;i<index;i++)
	{
		for(j=i;j<index;j++)
		{
			if(strcmp(str1[i],str1[j])==0)
				num[i]++;
		}
	}
	max=1;
	for(i=0;i<index;i++)
	{
		if(max<=num[i])
		{
			max=num[i];
		}
	}
	if(max==1)
	{
		my_printf("NO");
	}
	else
	{
		my_printf("%d\n",max);
	for(i=0;i<index;i++)
	{
		if(max==num[i])
			my_printf("%s\n",str1[i]);
	}
	}
}
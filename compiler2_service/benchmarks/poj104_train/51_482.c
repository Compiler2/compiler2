#define NUM_ITER 169319

#include <header.h>

int main_bench()
{
	char c[2000]={0},tc[2000][20]={0};
	int n,i,j,count[2000]={1},max=0;
	my_scanf("%d",&n);
	my_scanf("%s",c);
	for(i=0;c[i+n-1]!=0;i++)
	{
		for(j=0;j<n;j++)
		{
			tc[i][j]=c[i+j];
		}
	}
	for(i=1;tc[i][0]!=0;i++)
	{
		for(j=0;j<i;j++)
		{
			if(!strcmp(tc[i],tc[j])) {count[j]++;break;}
			if(j==i-1) count[i]++;
		}
	}
	for(i=0;tc[i][0]!=0;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
		}
	}
	if(max==1) my_printf("NO\n");
	else
	{
		my_printf("%d\n",max);
		for(i=0;tc[i][0]!=0;i++)
		{
			if(count[i]==max)
			{
				my_printf("%s\n",tc[i]);
			}
		}
	}	
	return 0;
}
#include <header.h>

struct oldpeople
{
	char id[20];
	int year;
}old[100],old60[100],cache;
int main_bench()
{
	int n;int i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d",old[i].id,&old[i].year);
	}
	int j=0;
	for(i=0;i<n;i++)
	{
		if(old[i].year>=60)
		{	old60[j]=old[i];j++;}
	}
	int k;
	for(i=0;i<j;i++)
	{
		for(k=0;k<j-i;k++)
		{
			if(old60[k].year<old60[k+1].year)
			{
				cache=old60[k+1];
				old60[k+1]=old60[k];
				old60[k]=cache;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		my_printf("%s\n",old60[i].id);
	}
	for(i=0;i<n;i++)
	{
		if(old[i].year<60)
		my_printf("%s\n",old[i].id);
	}
	return 0;
}

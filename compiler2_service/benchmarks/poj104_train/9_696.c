#define NUM_ITER 16166

#include <header.h>



int main_bench()
{
	struct pa
	{
		char id[20];
		int old;
	}pai[101],ol[101],you[101];
		
	int n,i,j,k,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d",pai[i].id,&pai[i].old);
	}
	l=0;k=0;
    for(i=0;i<n;i++)
	{
		if(pai[i].old>=60)
		{
			ol[l]=pai[i];
			l++;
		}
		if(pai[i].old<60)
		{
			you[k]=pai[i];
			k++;
		}
	}

	
	for(i=0;i<l;i++)
	{
	for(j=0;j<l-i;j++)
	{
		if(ol[j].old<ol[j+1].old)
		{
			ol[100]=ol[j];
		    ol[j]=ol[j+1];
			ol[j+1]=ol[100];
		}

	}
	}
	for(i=0;i<l;i++)
	{
		my_printf("%s\n",ol[i].id);
	}
	for(i=0;i<k-1;i++)
	{my_printf("%s\n",you[i].id);
	}
	my_printf("%s",you[k-1].id);
	}
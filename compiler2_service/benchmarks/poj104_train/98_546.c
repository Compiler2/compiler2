#define NUM_ITER 35289

#include <header.h>

int main_bench()
{
	char c[500][100];
	int d[500];
	int i=0;
	int a,sum,num,w;
	my_scanf("%d",&a);
	do
	{
		my_scanf("%s",c[i]);
		i++;
	}while(i<a);
	i=0;
	do
	{
		d[i]=strlen(c[i]);
		i++;}
	while(i<a);
	i=0;
	my_printf("%s",c[0]);
	do
	{   
		sum=0;
		num=0;
		if(w==1)
		{my_printf("%s",c[i]);
		sum+=d[i];i++;num++;}
		w=0;
		do
		{
		if(i==0)
		{sum+=d[i];i++;num++;}
		sum+=d[i];
		my_printf(" %s",c[i]);
		i++;
		if(i==a)
		{break;}
		num++;
		}while(sum+d[i]+num<=80);
		my_printf("\n");w++;
	}while(i<a);
	return 0;
}


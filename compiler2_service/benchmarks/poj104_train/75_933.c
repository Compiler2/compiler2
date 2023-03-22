#define NUM_ITER 142

#include <header.h>

int max_people(int x[],int y[],int num)
{
	int i,j,max=0,temp;
	for(i=0;i<1000;i++)
	{   
		temp=0;
		for(j=0;j<num;j++)
		{
			if((i>=x[j])&&(i<y[j]))
				temp++;
		}
	
		if(temp>max)
			max=temp;
	}
	return max;
}


int main_bench()
{
	int i,num=0,x[8000],y[8000];
	char c;
	do
	{
		my_scanf("%d%c",&x[num++],&c);
	}while(c!='\n');
	num=0;
	do
	{
		my_scanf("%d%c",&y[num++],&c);
	}while(c!='\n');
	my_printf("%d ",num);
	int max=max_people(x,y,num);
	my_printf("%d",max);
}
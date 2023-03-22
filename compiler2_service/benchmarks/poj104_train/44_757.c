#define NUM_ITER 403996

#include <header.h>

void reverse(int num)
{
	int i,k;
	int j=0;
	int a[1000];
	if(num==0)
		my_printf("0");
	else if(num>0)
	{
		do
		{
			a[j]=num%10;
			num=num/10;
			j++;
		}
		while(num>0);
		for(i=0;i<j;i++)
		{
			if(a[i]!=0)
				break;
		}
		for(k=i;k<j;k++)
			my_printf("%d",a[k]);
	}
	else if(num<0)
	{
		num=-num;
		do
		{
			a[j]=num%10;
			num=num/10;
			j++;
		}
		while(num>0);
		for(i=0;i<j;i++)
		{
			if(a[i]!=0)
				break;
		}
		my_printf("-");
		for(k=i;k<j;k++)
			my_printf("%d",a[k]);
	}
}


int main_bench()
{
	int x,y;
	for(x=0;x<6;x++)
	{
		my_scanf("%d",&y);
		reverse(y);
		my_printf("\n");
	}


	

	return 0;
}
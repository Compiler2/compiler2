#define NUM_ITER 96535

#include <header.h>

int leap(int a)
{
	int t=1,i=0;
	if(a==2||a==3)  return t;
	else
	{
		for(i=2;i*i<=a;i++)
       	{  
			if(a%i==0)
		   { 
			t=0;
			break;
		    }
		}
	}
	return t;
}
int main_bench()
{
	int i,m;
	my_scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		if(leap(i)&&leap(m-i))
		{
			my_printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}
#define NUM_ITER 26560

#include <header.h>

int main_bench()
{
	int n,i=0,x,y;
	double s[100];
	my_scanf("%d",&n);
	my_scanf("%d %d",&x,&y);
	s[0]=(double)y/x;
	for(i=1;i<n;i++)
	{
	my_scanf("%d %d",&x,&y);
	s[i]=(double)y/x;
	if(s[i]-s[0]>0.05)
		{my_printf("better\n");}
		else 
			if(s[0]-s[i]>0.05)
				{my_printf("worse\n");}
				else {my_printf("same\n");}
	}

   return 0;
}
#include <header.h>


int main_bench()
{
	int b,max=0,lmax=0,a[100000];
	my_scanf("%d",&b);
	a[0]=0;
	for(int i=0;i<b;i++)
	{ my_scanf("%d",&a[i]); 
	   if (a[i]>=max)
	   {max=a[i];}
	}

	for(int k=0;k<b;k++)
	{  if((a[k]>=lmax)&&(a[k]<max))
	{lmax=a[k];
	}
	}
	my_printf("%d\n",max);
	my_printf("%d\n",lmax);
	return 0;
}



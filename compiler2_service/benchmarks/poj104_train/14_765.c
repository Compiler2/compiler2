#define NUM_ITER 18836

#include <header.h>

int main_bench()
{
	int n,a[99999],b[2],i,k,m,s[99999],first=0,x,y;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%d",&a[i]);
		for (k=0;k<2;k++)
		{
			my_scanf("%d",&b[k]);
		}
		s[i]=b[0]+b[1];						
	}
	
	for (m=0;m<3;m++)
	{ first=0;
		for (x=0;x<n;x++)
		{
			   
		       if (s[x]>first)
			   {first=s[x];
			   y=x+1;
			   }
			   

		}
		my_printf ("%d %d\n",y,first);
	    s[y-1]=0;

	}
	return 0;
}

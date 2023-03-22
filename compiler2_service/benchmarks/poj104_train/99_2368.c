#include <header.h>

int main_bench()
{
	int n,y[100],i;
		double a=0,b=0,c=0,d=0;
		my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{	my_scanf("%d",&y[i]);
	     if(y[i]<=18)
			 a++;
		 if((y[i]>=19)&&(y[i]<=35))
			 b++;
		 if((y[i]>=36)&&(y[i]<=60))
			 c++;
		 if(y[i]>60)
			 d++;
    }
    	my_printf("1-18: %.2f%%\n",100.0*a/n);
		my_printf("19-35: %.2f%%\n",100.0*b/n);
		my_printf("36-60: %.2f%%\n",100.0*c/n);
		my_printf("60??: %.2f%%\n",100.0*d/n);
		return 0;
}

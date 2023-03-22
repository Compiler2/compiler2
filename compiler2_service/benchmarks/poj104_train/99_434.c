#define NUM_ITER 56137

#include <header.h>

int main_bench()
{ 
	int a[100],n,i,b,c,d,e;
    double o,p,q,r;
	my_scanf("%d",&n);
	b=0;
	c=0;
	d=0;
	e=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	
 	for(i=0;i<n;i++)
	{
		if(a[i]<19)
		{
			b+=1;
			 
		}
		else
		{
			if(a[i]<36)
			{
				c+=1;
				 
			}
			else
			{
                if(a[i]<61)
				{
					d+=1;
					 
				}
		        else 		
				{ 
					e+=1;
				 
				}
			}
		}
			
		
	}
	o=(double)100*b/n;
	p=(double)100*c/n;
	q=(double)100*d/n;
	r=(double)100*e/n;
	my_printf("1-18: %.2lf%%\n",o);
    my_printf("19-35: %.2lf%%\n",p);
    my_printf("36-60: %.2lf%%\n",q);
    my_printf("60??: %.2lf%%",r);
	return 0;
}

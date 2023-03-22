#define NUM_ITER 687

#include <header.h>


int main_bench()
{
        int n,i,j,x1=0,x2,y1=0,y2,num,s;
		my_scanf ("%d",&n);
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
			{
				my_scanf ("%d",&num);
				if (num==0)
				{
					if (x1==0)
						x1=i+1;
					x2=i;
					if (y1==0)
						y1=j+1;
					y2=j;
				}

			}
			s=(x2-x1)*(y2-y1);
			my_printf ("%d\n",s);
				

		
		return 0;
}
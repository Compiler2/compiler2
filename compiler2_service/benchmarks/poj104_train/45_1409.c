#define NUM_ITER 1078655

#include <header.h>

 
int main_bench()
{
	int l1,l2,i,j,a=0;
	char ds[100],dw[100];
	my_scanf ("%s %s",ds,dw);
	l1=strlen(dw);
	l2=strlen(ds);

	for (i=0;i<l1;i++)
	{
		if (dw[i]==ds[0])
		{
			for (j=0;j<l2;j++)
			{
				if (dw[i+j]==ds[j])
					a=a+1;
			}
			if (a==l2)
				my_printf ("%d",i);
		}
		if (a==l2)
			break;
	}
	
	return 0;
}



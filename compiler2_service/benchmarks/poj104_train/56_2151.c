#define NUM_ITER 1372191

#include <header.h>

int main_bench()
{
	int n,i,j,a[7],b[7],c=0;
	my_scanf("%d",&n);
	a[0]=0;
	a[1]=n/10000;
	a[2]=(n-a[1]*10000)/1000;
	a[3]=(n-a[1]*10000-a[2]*1000)/100;
	a[4]=(n-a[1]*10000-a[2]*1000-100*a[3])/10;
	a[5]=n-a[1]*10000-a[2]*1000-100*a[3]-10*a[4];
	for(j=0;j<=5;j++)
	{
		if(a[j]==0)
		{
			if(a[j-1]==0)
			{
				continue;
			}
			else
			{
			    b[5-j]=a[j];
			}
		}
		else
		{
			 b[5-j]=a[j];
			 c+=1;
		}
	}
	for(i=0;i<c;i++)
	{
		my_printf("%d",b[i]);
	}
	return 0;
}




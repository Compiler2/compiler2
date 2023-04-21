#define NUM_ITER 5893

#include <header.h>

int main_bench()
{
	int n,j,i,t,a[1000],b[1000],m=0,temp=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
		my_scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{   if(a[i]%2!=0)
			{
		b[m]=a[i];
		m++;
	    temp++;
	}
	
	}
	for(m=0;m<temp;m++)
	{
		if(b[m+1]>b[m])
		{
	     my_printf("%d,",b[m]);
		}
		else
		{
			my_printf("%d",b[m]);
		}
	}
		return 0;
	

}
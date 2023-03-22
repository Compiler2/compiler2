#include <header.h>

int main_bench()
{
	int n,i,a[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	int b[300],j;int p=0;
	for(i=0;i<n;)
	{
		if(i==0) {b[p]=a[i];p++;i++;}
        else
		{
			for(j=0;j<i;j++)
			{
			  
			   if(a[i]==a[j]) 
			   { 
				   if(i<n-1)
				   {i++;j=0;}
				   else goto stop;
			   }
			}
		b[p]=a[i];p++;i++;
		}
		
	}
stop:  p=p-1;
	for(i=0;i<p;i++)
	{
		my_printf("%d,",b[i]);
	}
	my_printf("%d",b[i]);


}
#include <header.h>

int main_bench()
{
	int n,i,a[10000],b,c,d,e;
	my_scanf("%d",&n);
		for(i=0;i<n;i++)
			my_scanf("%d",&a[i]);
		b=0;c=0;d=0;e=0;
		for(i=0;i<n;i++)
		
		{
			
			if (a[i]<=18)
				b=b++;
		    
			else if(a[i]>18&&a[i]<=35)
			c++;
			
			else if(a[i]>35&&a[i]<=60)
				d++;
			else e++;
		}
		my_printf("1-18: %.2f%\n",(float)b/n*100);
        my_printf("19-35: %.2f%\n",(float)c/n*100);
        my_printf("36-60: %.2f%\n",(float)d/n*100);
        my_printf("60??: %.2f%\n",(float)e/n*100);
}
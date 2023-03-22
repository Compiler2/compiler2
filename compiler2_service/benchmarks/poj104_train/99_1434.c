#include <header.h>

int main_bench()
{
	int n,i;
	int a[100]={0};
	int s=0,q=0,z=0,l=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]<=18)
		{
			s+=1;
		}
		else if(a[i]>18&&a[i]<=35)	
		{
			q+=1;
		}
		else if(a[i]>35&&a[i]<=60)	
		{
			z+=1;
		}
		else if(a[i]>60)	
		{
			l+=1;
		}
	}
	my_printf("1-18: %.2lf%\n",100.0*s/n);
	my_printf("19-35: %.2lf%\n",100.0*q/n);
	my_printf("36-60: %.2lf%\n",100.0*z/n);
	my_printf("60??: %.2lf%\n",100.0*l/n);
	return 0;
}
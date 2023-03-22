#define NUM_ITER 56313

#include <header.h>

int main_bench()
{
	int a[100],n,i,j=0,k=0,l=0,m=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		
		if(a[i]<=18)
			j++;
		else if(a[i]<=35)
			k++;
		else if(a[i]<=60)
			l++;
		else
			m++;
	}
	my_printf("1-18: ");
	my_printf("%.2f%%\n",(float)j/n*100);
my_printf("19-35: ");
my_printf("%.2f%%\n",(float)k/n*100);
	   

my_printf("36-60: ");
my_printf("%.2f%%\n",(float)l/n*100);	   
my_printf("60??: ");
my_printf("%.2f%%\n",(float)m/n*100);
}

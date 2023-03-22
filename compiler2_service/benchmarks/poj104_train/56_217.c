#define NUM_ITER 657689

#include <header.h>

int main_bench()
{
    int i,a[10],b[10]; 
	for(i=0;i<4;i++)
		my_scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
    b[i]=0; 
    while(a[i]>9)
	{ 
      b[i]=(b[i]+a[i]-a[i]/10*10)*10; 
      a[i]=a[i]/10; 
    } 
    b[i]=b[i]+a[i]; 
    my_printf("%d\n",b[i]);
	}
	return 0;
}

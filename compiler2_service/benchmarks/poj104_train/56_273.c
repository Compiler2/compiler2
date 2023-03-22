#include <header.h>

int main_bench()
{
    int a[4],i; 
    int b[4]={0}; 
    for(i=0;i<=3;i++)
    my_scanf("%d",&a[i]); 
    for(i=0;i<=3;i++)
	{
	 while(a[i]>9)
	{ 
	 b[i]=(b[i]+a[i]-a[i]/10*10)*10; 
          a[i]/=10; 
         } 
    b[i]+=a[i]; 
    my_printf("%d\n",b[i]);
	}
    return 0;
}

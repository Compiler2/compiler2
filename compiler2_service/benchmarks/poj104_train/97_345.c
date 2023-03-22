#include <header.h>


int main_bench()
{
   
    int m,i;
	int a[6]={100,50,20,10,5,1},n[6];
	my_scanf("%d",&m);
	for(i=0;i<6;i++)
	{
		n[i]=m/a[i];
		m=m-n[i]*a[i];
		my_printf("%d\n",n[i]);
	}
	return 0;
}

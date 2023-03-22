#define NUM_ITER 930757

#include <header.h>

int main_bench()
{
	int m,n[6],i;
	int a[6]={100,50,20,10,5,1},b[7];
	my_scanf("%d",&m);
	b[0]=m;
	for(i=0;i<6;i++)
	{
		n[i]=(int)b[i]/a[i];
		b[i+1]=b[i]%a[i];
		my_printf("%d\n",n[i]);
	}
	return 0;
}
#define NUM_ITER 45132

#include <header.h>

int main_bench()
{
	int ch[100],i,max,max1,n;
	my_scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	my_scanf("%d\n",&ch[i]);
	my_scanf("%d",&ch[n-1]);
	max=ch[0];
	max1=ch[0];
	for(i=0;i<n;i++)
	{
		if(max<ch[i])
		max=ch[i];
	}
	my_printf("%d\n",max);
	for(i=0;i<n;i++)
	{
		if(max1<ch[i]&&ch[i]!=max)
			max1=ch[i];
	}
	my_printf("%d",max1);
}




		
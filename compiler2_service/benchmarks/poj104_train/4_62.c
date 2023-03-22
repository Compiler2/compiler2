#define NUM_ITER 521

#include <header.h>


int main_bench()
{
	int a,b,*p,i,j,k;
	p=(int*)malloc(11000*sizeof(int));
	my_scanf("%d %d",&a,&b);
	for(i=0;i<a*b;i++)
	{
		my_scanf("%d",p+i);
	}
	for(i=0;i<b;i++)
	{
		k=i;
		j=0;
		while(k>=0&&j<a)
		{
			my_printf("%d\n",*(p+k+j*b));
			k--;
			j++;
		}
	}
	for(i=1;i<=a;i++)
	{
		k=i;
		j=0;
		while(k<a&&j<b)
		{
			my_printf("%d\n",*(p+b-1-j+k*b));
			j++;
			k++;
		}
	}
}

#define NUM_ITER 410916

#include <header.h>

int main_bench()
{
	int reverse(int num);
	int i,a[6],b[6];
	for(i=0;i<6;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=reverse(a[i]);
	}
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",b[i]);
	}
	return 0;
}
int reverse(int num)
{
	int s=0,k;
	do
	{
		k=num%10;
		num=num/10;
                   s=(s+k)*10;
	}
           while(num!=0);
s=s/10;
return(s);
}


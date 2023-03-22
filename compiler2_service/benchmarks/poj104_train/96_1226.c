#define NUM_ITER 1185102

#include <header.h>

int main_bench()
{
	char n[100];
	int b[100],a[100],i,sa,c,k=0;
    my_scanf("%s",n);
    sa=strlen(n);
	for(i=0;i<sa;i++)
	{
		a[i]=n[i]-'0';
	}
	c=a[0];
	for (i=0;i<sa-1;i++)
	{
		b[i]=(10*c+a[i+1])/13;
		c=(10*c+a[i+1])%13;
	}
    if (sa==1)
	{
		my_printf("0\n%d",a[0]);
		k=1;
	}
	if ((sa==2)&&(a[0]*10+a[1]<13))
	{
		my_printf("0\n%d",10*a[0]+a[1]);
		k=1;
	}
	if (k==0)
	{
	if(b[0]==0) 
	{
		for(i=1;i<sa-1;i++)
		{
			my_printf("%d",b[i]);
		}
		my_printf("\n%d",c);
	}
	else 
	{
		for (i=0;i<sa-1;i++)
		{
			my_printf("%d",b[i]);
		}
		my_printf("\n%d",c);
	}}
	return 0;
}

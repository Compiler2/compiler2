#define NUM_ITER 555753

#include <header.h>

int main_bench()
{
    char ca[250],cb[250];
	int  *a,*b,*c,l,i,j;
	my_scanf("%s %s",ca,cb);
	l=strlen(ca);
	if(strlen(cb)>strlen(ca))
		l=strlen(cb);
	a=(int *)malloc(sizeof(int)*l);
	b=(int *)malloc(sizeof(int)*l);
	c=(int *)malloc(sizeof(int)*(l+1));
	for(i=0;i<l;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	c[l]=0;
	for(i=0;i<strlen(ca);i++)
		a[i]=ca[strlen(ca)-1-i]-'0';
	for(i=0;i<strlen(cb);i++)
		b[i]=cb[strlen(cb)-1-i]-'0';
	for(i=0;i<l;i++)
		c[i]=a[i]+b[i];
	for(i=0;i<l;i++)
	{
		if(c[i]>=10)
		{
			
			c[i+1]+=(c[i]/10);
			c[i]%=10;
		}
	}
	j=-1;
	for(i=l;;i--)
	{
		if(c[i]!=0)
		{
			j=i;
			break;
		}
	}
	if(j<0)
		my_printf("0");
	else
		for(i=j;i>=0;i--)
			my_printf("%d",c[i]);
		my_printf("\n");



	free(a);
	free(b);
	free(c);
	return 0;
}
#define NUM_ITER 12077

#include <header.h>

int main_bench()
{
	int n,i,len1,len2,j;
	char x[100]={0};
	char y[100]={0};
	char z[100]={0};
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf ("%s",x);
	    my_scanf ("%s",y);
        len2=strlen(y);
		len1=strlen(x);
		z[0]=x[len1-1]+10-y[len2-1]+48;
		for(i=1;i<len2;i++)
		z[i]=x[len1-1-i]-1+10-y[len2-1-i]+48;
		for(i=len2;i<len1;i++)
			z[i]=x[len1-1-i]+10-1;
		for(i=0;i<len1;i++)
		{if(z[i]>57)
		{z[i+1]=z[i+1]+1;
		z[i]=z[i]-10;
		}
		}
		for(i=len1-1;i>=0;i--)
			my_printf("%d",z[i]-48);
		my_printf("\n");
	}
	return 0;

}

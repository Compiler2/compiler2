#define NUM_ITER 10995

#include <header.h>

int main_bench()
{
	char a[150],b[150];
	int c[150],d[150],result[150];
	int n,la,lb,i,j,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		my_scanf("%s",b);
		la=strlen(a);
		lb=strlen(b);
		for(j=0;j<la;j++)
			c[j]=a[j]-'0';
		for(j=0;j<la-lb;j++)
			d[j]=0;
		for(j=la-lb;j<la;j++)
			d[j]=b[j-la+lb]-'0';

		int carry = 0;
		for(j=la-1;j>=0;j--)
		{
			if(c[j]>=d[j]+carry)
			{
				result[j]=c[j]-d[j]-carry;
				carry = 0;
			}
			else 
			{
				
				
				result[j]=c[j]+10-d[j]-carry;
				carry = 1;
			}
		}
		for(j=0;j<la;j++)
		{
			if(result[j]!=0) break;
		}
		for(k=j;k<la-1;k++)
			my_printf("%d",result[k]);
		my_printf("%d\n",result[la-1]);
	}
	return 0;
}
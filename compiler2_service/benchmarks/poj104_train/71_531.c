#define NUM_ITER 7020

#include <header.h>

int main_bench()
{
	int n,i,temp,a[200],b[200],c[200],d[13]={31,28,31,30,31,30,31,31,30,31,30,31};
	int cha=0,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
                  	my_scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++)
	{
                  if(b[i]>c[i])
                  {temp=b[i];
                   b[i]=c[i];
                   c[i]=temp;}
                   if(a[i]%400==0||(a[i]%4==0&&a[i]%100!=0))
		{
			d[1]=d[1]+1;
			for(j=b[i];j<c[i];j++)
			{cha=cha+d[j-1];}
                            d[1]=d[1]-1;
			if(cha%7!=0)
				my_printf("NO\n");
			else
				my_printf("YES\n");
		}
		else{
			for(j=b[i];j<c[i];j++)
			{cha=cha+d[j-1];}
			if(cha%7!=0)
				my_printf("NO\n");
			else
				my_printf("YES\n");
		}
		cha=0;
	}
	return 0;
}

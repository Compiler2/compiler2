#define NUM_ITER 5926

#include <header.h>

int main_bench()
{
	int a[300],b[300],n,i,j,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%d",&a[i]);
	b[i]=0;}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((a[i]==a[j])&&(b[j]==0))b[j]=1;
			for(i=0;i<n;i++)
				if(b[i]==0)j=i,t=a[i];
	for(i=0;i<j;i++)
	{if(b[i]==0)my_printf("%d,",a[i]);}
	my_printf("%d",t);
	
}
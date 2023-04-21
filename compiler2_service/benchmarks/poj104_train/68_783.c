#define NUM_ITER 277

#include <header.h>

int main_bench()
{
	int flag[50001];
	int i,j,k,m,p,q,s;
	int n;
	my_scanf("%d",&n);
	int a[50000];
	flag[3]=1;
	for(i=3;i<50001;i=i+2)
	{
		flag[i]=1;
	}
	for(i=3;i<=223;i+=2)
	{
		if(flag[i])
		for(k=i*i;k<50001;k+=i)
			flag[k]=0;
	}
	m=0;
	for(j=3;j<50001;j+=2)
	{
		if(flag[j])
		{
			m=m+1;
			a[m]=j;			
		}
	}
   
	for(j=6;j<=n;j+=2)
	{
	my_printf("%d=",j);
	for(i=1;i<=m;i++)
	{
		if(flag[j-a[i]])
		{
			my_printf("%d+%d\n", a[i],j-a[i]);
				break;
		}
			
	}	
	}
	
}
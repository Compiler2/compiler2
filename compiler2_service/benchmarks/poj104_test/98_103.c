#define NUM_ITER 34724

#include <header.h>

int main_bench()
{
	int n,i,j,k=1,a[1000],s=0;
	char m[1000][40];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",m[i]);
	for(i=0;i<n;i++)
		a[i]=strlen(m[i]);
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			my_printf("%s",m[i]);
			break;
		}
		s=s+a[i]+1;
		if(s+a[i+1]<=80)
		{			
			my_printf("%s ",m[i]);
		
		}
		else
		{
			my_printf("%s",m[i]);
			my_printf("\n");
			s=0;
		}
	
	}
}
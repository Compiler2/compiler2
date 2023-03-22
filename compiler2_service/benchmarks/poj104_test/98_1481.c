#include <header.h>

int main_bench()
{
	char a[500][41];
	int n,i,j,k,r,b[500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=0,k=b[0]+1;i<n-1;i++)
	{
		k=k+b[i+1];
		my_printf("%s",a[i]);
		if(k>80)
		{
			my_printf("\n");
			k=b[i+1]+1;
		}
		else 
		{
			my_printf(" ");
			k=k+1;
		}
	}
	my_printf("%s",a[n-1]);
}
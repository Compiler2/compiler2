#include <header.h>


int main_bench()
{
	char a[1000][41];
	int p=0,i=0,n;
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		if(p==0)
		{
			my_printf("%s",a[i]);
			p=p+strlen(a[i]);
		}
		else if(p+1+strlen(a[i])<=80)
		{	
			my_printf(" %s",a[i]);
			p=p+strlen(a[i])+1;
		}
		else
		{
		
			p=0;
			i--;
			my_printf("\n");
		}
	}
}
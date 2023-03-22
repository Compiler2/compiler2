#include <header.h>

int main_bench()
{
    int n,i,l,l0=0,l1=50,p,q;
	char a[200][50];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(l>l0)
		{
			l0=l;
			p=i;
		}
	    if(l<l1)
		{
			l1=l;
			q=i;
		}
	}
	my_printf("%s\n",a[p]);
	my_printf("%s",a[q]);
	return 0;
}


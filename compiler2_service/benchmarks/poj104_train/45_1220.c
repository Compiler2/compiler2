#include <header.h>

main_bench()
{
	int i,n1,n2,e,p;
	char a[50],b[50];
	my_scanf("%s",a);
	my_scanf("%s",b);
	n1=strlen(a);
	n2=strlen(b);
	for (i=0;i<=n2-1;i++)
	{
		if (a[0]==b[i])
		{
	    	e=0;
			for (p=0;p<=n1-1;p++)
			{
				if (a[p]!=b[i+p])
				{
					e=1;
					break;
				}
			}
			if (e==0)
			{
				my_printf ("%d\n",i);
				break;
			}
		}
	}
}
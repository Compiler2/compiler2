#include <header.h>

int main_bench()
{
	int s=0,n,l1,l2,f=0,i;
	double m,x;
	char a[501],b[501];
	my_scanf("%lf%s%s",&m,a,b);
	l1=strlen(a);
	l2=strlen(b);
	if (l1!=l2) my_printf("error\n");
	else 
	{
		for (i=0;i<l1;i++)
			if ((a[i]!='A' && a[i]!='T' && a[i]!='G' && a[i]!='C') || (b[i]!='A' && b[i]!='T' && b[i]!='G' && b[i]!='C')) 
			{
				f=1;
			}
		if (f==1) my_printf("error\n");
		else
		{
			for (i=0;i<l1;i++)
				if (a[i]==b[i]) s++;
			x=(double)s/l1;
			if (x>m) my_printf("yes\n");
			else my_printf("no\n");
		}
	}
	return 0;
}
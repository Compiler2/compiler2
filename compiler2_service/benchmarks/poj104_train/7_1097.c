#include <header.h>



int main_bench()
{
	char a[256],b[256],c[256];
	int la,lb,lc,i,j,p=0;
	my_scanf ("%s",a);
	my_scanf ("%s",b);
	my_scanf ("%s",c);
	la=strlen(a);
	lb=strlen(b);
	lc=strlen(c);
	for (i=0;i<la;i++)
	{
		if (b[0]==a[i])
		{
			for (j=1;j<lb;j++)
			{
				if (b[j]==a[i+j])
					p=0;
				else
					p=1;
			}
			if (p==0)
			{
				for (j=0;j<lc;j++)
					a[i+j]=c[j];
				break;
			}
		}
	}
	my_printf ("%s",a);
	return 0;
}
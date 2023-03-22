#define NUM_ITER 31035

#include <header.h>

int main_bench()
{
	int n,i,b,j,d=1,l[100];
	char a[100][20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&a[i]);
		l[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=(int)a[i][0];
		if(a[i][0]=='_'||(b>=65&&b<=90)||(b>=97&&b<=122))
		{
			for(j=1;j<l[i];j++)
			{
				b=(int)a[i][j];
				if(a[i][j]=='_'||(b>=65&&b<=90)||(b>=97&&b<=122)||(b>=48&&b<=57))
				{
					d=d+1;
				}
				else
				{
					my_printf("no\n");
					d=d-1;
					break;
				}			
			}			
			if(d==l[i])
			{
				my_printf("yes\n");
			}
		}
		else
		{
			my_printf("no\n");
		}
		d=1;
	}
	return 0;
}

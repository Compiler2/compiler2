#define NUM_ITER 29381

#include <header.h>


int main_bench()
{
	int i,n,j,f[1000],l[1000];
	char a[20];
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		f[j]=1;
		my_scanf("%s",a);
		l[j]=strlen(a);
		if(a[0]<65 || (a[0]>90&&a[0]<95) || (a[0]>95&&a[0]<97) || a[0]>122)
		{
			f[j]=0;
		}
		else
		{
			for(i=1;i<l[j];i++)
			{
				if(a[i]=='_'||(a[i]>=48 && a[i]<=57)||(a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
				{
					f[j]=1;
					
				}
				else
				{
					f[j]=0;
					break;
				}
			}
		}
	}
	for(j=0;j<n;j++)
	{
		if(f[j]==1)
			my_printf("\nyes");
		else if(f[j]==0)
			my_printf("\nno");
	}
	return 0;
}
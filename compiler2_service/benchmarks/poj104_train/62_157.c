#define NUM_ITER 1140886

#include <header.h>



int main_bench()
{
	char a[100],b[100],i,j,n,m;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]!=' ')
				{
					break;
				}
				a[j]='>';
			}
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!='>')
		{
			b[j]=a[i];
			j++;
		}
	}
	m=strlen(b);
	for(i=0;i<j;i++)
	{
		my_printf("%c",b[i]);
	}
		




 
 
	return 0;
}
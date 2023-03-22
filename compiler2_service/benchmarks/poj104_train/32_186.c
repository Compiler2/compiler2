#include <header.h>

int main_bench()
{
	int n,i,j,m,l,d;
	char a[100],b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		my_scanf("%s",b);
		m=strlen(a);
		l=strlen(b);
		d=l;
		for(j=m-1;j>m-d-1;j--)
		{
			if(a[j]>=b[l-1])
			{
				a[j]=a[j]-b[l-1]+48;
				l--;
			}
			else
			{
				a[j]=a[j]+10-b[l-1]+48;
				a[j-1]=a[j-1]-1;
				l--;
			}
		}
		j=0;
		while(a[j]==0)
			j++;
		for(;j<m;j++)
			my_printf("%c",a[j]);
	 	my_printf("\n"); 
	}
	return 0;
}
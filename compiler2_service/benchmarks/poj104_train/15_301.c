#include <header.h>

int main_bench()
{
	int a[100][100];
	int i,j,l,m,n,s;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	
	{	for(j=0;j<n-1;j++)
			my_scanf("%d ",&a[i][j]);
	my_scanf("%d",&a[i][n-1]);}
		m=0;
		for(i=0;i<n;i++)
		{	for(j=0;j<n;j++)
			{if(a[i][j]==0)
		{m++;break;
		
		}
		
		}
		}
	l=0;
		for(j=0;j<n;j++)
			for(i=0;i<n;i++)
			{  if(a[i][j]==0)
		{l++;
		
		break;}
		
		}
		
s=(l-2)*(m-2);
my_printf("%d",s);
}	
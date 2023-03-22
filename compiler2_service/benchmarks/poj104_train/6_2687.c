#include <header.h>

int main_bench()
{
	int k,m,n,s,i,j,a;
	for(my_scanf("%d",&k);k>0;k--)
	{
		s=0;
		my_scanf("%d%d",&m,&n);
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a);
			s=s+a;
			}
		for(i=1;i<m-1;i++)
		{
			my_scanf("%d",&a);
			s=s+a;
			for(j=1;j<n;j++)
			my_scanf("%d",&a);
			if(n!=1)
			s=s+a;
			}
		if(m!=1)
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a);
			s=s+a;
			}
		my_printf("%d\n",s);
		}
}
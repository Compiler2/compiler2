#include <header.h>

int main_bench()
{
	int n,i,a[100],b[100],n1=0,n2=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d %d",&a[i-1],&b[i-1]);
	    if(a[i-1]>=90 && a[i-1]<=140 && b[i-1]<=90 && b[i-1]>=60)
		{
			n1++;
			if(n1>n2)
			{
				n2=n1;
			}
		}
		else 
			n1=0;
		
	}
	my_printf("%d\n",n2);
	return 0;
}



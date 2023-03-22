#include <header.h>

int factoring(int a,int b)
{
    int i,kind=0;
	if(a==1)
	{
	    kind=1;
	}

	else
	{
	    for(i=b;i<=a;i++)
		{
		    if(a%i==0)
			{
	            kind=factoring(a/i,i)+kind;
			}
		}
	}
	return kind;
}

int main_bench()
{
	int n,i,j,a[30000]={0},b[30000]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=factoring(a[i],2);
	}
	for(i=0;i<n;i++)
	{
		my_printf("%d\n",b[i]);
	}
	return 0;
}
#define NUM_ITER 699

#include <header.h>

int main_bench()
{
	int a[1000][1000];
	int i,j,s=0;
	int e,b,c,d=0;
	int n=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i][j]<a[i][j+1])
			{
				e=i;
				b=j;
				break;
			}
		}
	}
    for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>0;j--)
		{
          if(a[i][j]<a[i][j-1])
		  {
			  c=i;
			  d=j;
			  break;
		  }
		}
	}
	s=(c-e+1)*(d-b+1);
	my_printf("%d",s);
    return 0;
}
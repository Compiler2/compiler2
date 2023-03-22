#define NUM_ITER 1262

#include <header.h>

int main_bench()
{
	int n,m;
	int a[10000];
	int i,j,k,cs[10000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			my_scanf("%d",&a[j]);
		}
		if(a[m-1]+3*m<60)
			cs[i]=60-3*m;
		if(a[m-1]+3*m>=60)
		{
			for(k=m-1;k>=0;k--)
			{
				if((a[k]+3*(k+1))<=60)
					break;
			}
			if(60-(a[k]+3*(k+1))+a[k]>a[k+1])
				cs[i]=60-3*(k+1)-1;
			else cs[i]=60-3*(k+1);

		}
			
	}
	for(i=0;i<n;i++)
		my_printf("%d\n",cs[i]);




	return 0;

}
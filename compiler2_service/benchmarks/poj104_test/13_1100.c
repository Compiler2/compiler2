#define NUM_ITER 9352

#include <header.h>

int main_bench()
{
	int n,i,j,k,p,q,m;
	int a[20000];
	int b[20000];


	my_scanf("%d",&n);



	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	
	b[0]=0;




	for(j=1;j<n;j++)
	{
		b[j]=0;
		for(k=0;k<j;k++)
		{
			if(a[j]==a[k])
				b[j]++;
		}

	}

	my_printf("%d",a[0]);

	for(p=1;p<n;p++)
	{
		if(b[p]==0)
			my_printf(" %d",a[p]);
	}
	



	return 0;
}


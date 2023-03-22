#define NUM_ITER 675

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);

	int i,j;
	int t,t1,t2;
	int a[10000];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[0]=255;
			my_scanf("%d",&a[j+1]);
			if(a[j]==0 && a[j-1]==255)
			{

				t1=j;
			}

			if(a[j-1]==0 && a[j]==255)
			{
				t2=j-1;
			}

		}
	}
	my_printf("%d",(t2-t1-1)*(t2-t1-1));
	return 0;
}
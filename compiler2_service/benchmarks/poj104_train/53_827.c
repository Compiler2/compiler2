#define NUM_ITER 6159

#include <header.h>

int main_bench()
{
	int n , a[300] , shifouchuxian ;
	my_scanf("%d",&n);
	for(int i = 0;i<n;i++)
		my_scanf("%d",&a[i]);                             
	my_printf("%d",a[0]);
	for(int i = 1;i<n;i++)
	{
		shifouchuxian = 0;
		for(int j = 0;j<i;j++)
		{
			if(a[j] == a[i])                        				shifouchuxian += 1;                         		}
		if(shifouchuxian == 0)
			my_printf(",%d",a[i]);                       	}
	return 0;
}

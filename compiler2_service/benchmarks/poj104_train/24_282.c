#define NUM_ITER 1644194

#include <header.h>

int main_bench()
{
	char a[50][30];
	int k=0, i=0;

	
	
	
	
	
	
	
	
	

	while(my_scanf("%s",&a[i])>0)
	{
		k++;
		i++;
	}
	int size[50];
	for(i=0;i<k;i++)
	{
		size[i]=strlen(a[i]);
	}
	int min=30;
	int max=0;
	int imin, imax;
	for(i=0;i<k;i++)
	{
		if(size[i]<min)
		{
			min=size[i];
			imin = i;
		}
		if(size[i]>max)
		{
			max=size[i];
			imax = i;
		}
	}
	
	my_printf("%s\n", a[imax]);
	my_printf("%s\n", a[imin]);
	return 0;
}
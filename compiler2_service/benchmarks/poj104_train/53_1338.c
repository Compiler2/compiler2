#define NUM_ITER 9747

#include <header.h>


int main_bench(){
	int a[300],b[300],n,i,j,k=1 ,x;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
    b[0]=a[0];
	for(i=1;i<n;i++)
	{
	    x=0;
		for(j=0;j<k;j++)
		{
			if (a[i]==b[j])
			{

				x=1;
			    break;
			}
		}
		if (x==0) 
		{
			b[k]=a[i];
			k++;
		}

	}
	for(i=0;i<k-1;i++)
	{
		my_printf("%d,",b[i]);
	}
	my_printf("%d\n",b[k-1]);
	return 0;
}





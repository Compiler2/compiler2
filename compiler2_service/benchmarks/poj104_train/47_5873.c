#define NUM_ITER 55676

#include <header.h>


int main_bench()
{
	int a[100],b[100],i,n;
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++){
        
			b[i]=a[n-1-i];
                      if(i<n-1)
			my_printf("%d ",b[i]);
                      else if (i=n-1)
                            my_printf("%d",b[i]);}
	return 0;
}

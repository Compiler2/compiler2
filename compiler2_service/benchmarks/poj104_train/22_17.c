#define NUM_ITER 1730047

#include <header.h>

int main_bench()
{
	int a[1000],i,n=1,max1=0,max2=0;
	my_scanf("%d",&a[0]);
	while (getchar()==',') my_scanf("%d",&a[n++]);
    for (i=0;i<n;i++) max1= a[i]>max1? a[i]:max1;
	for (i=0;i<n;i++) max2= (a[i]<max1 && a[i]>max2)? a[i]:max2;
	if (max2>0) my_printf("%d",max2);
	else my_printf("No");
	return 0;
}
#define NUM_ITER 33761

#include <header.h>



int main_bench()
{
	int n;
	int k = 0;
	int max = 0;
	int a;
	int b;
    my_scanf("%d",&n);
	while(n != 0)
	{
		my_scanf("%d",&a);
		my_scanf("%d",&b);
		if (90 <= a && a <= 140 && 60 <= b && b<= 90)
			k++;
		else
			k = 0;
			
		if(max < k)
			max = k;
			
	   n--;
	}
	my_printf("%d",max);
	
   return 0;
}

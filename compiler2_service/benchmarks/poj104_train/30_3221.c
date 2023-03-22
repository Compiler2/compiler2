#define NUM_ITER 80861

#include <header.h>



int main_bench()
{
	int i=1;
    int s=0;
    int n;
    my_scanf("%d",&n);
    while (i<=n) {
         if (((i%7))&&(!(i%10==7))&&(!(i/10==7))) {
		
                                         s=s+i*i;
										
                                         }
                                         i++;
                                         }

    my_printf("%d",s);
	return 0;
}
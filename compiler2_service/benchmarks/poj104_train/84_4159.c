#define NUM_ITER 62931

#include <header.h>


int main_bench()
{

	int s, x, i,n,t;
	my_scanf("%d", &n);
	s=0;
	for(i=0; i<n; i++) {
		my_scanf("%d", &x);
	if (x>=s) 
               {
		       t=s;
               s=x;         
		}
        else if (x>t) 
        {
			t=x;
        }
	}
	my_printf("%d\n", s);
	my_printf("%d", t);
		return 0;
}
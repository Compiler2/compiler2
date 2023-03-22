#define NUM_ITER 1520982

#include <header.h>

int main_bench()
{
	int a,b,c,d,n;
	my_scanf("%d",&n);
while (n>0) {
   my_printf("%d",n%10);
   n=n/10;
}

}

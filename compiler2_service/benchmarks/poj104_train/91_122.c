#define NUM_ITER 1550615

#include <header.h>

int main_bench()
{char *p,x[101],fir;
 gets(x);
 fir=x[0];
 for(p=x;*(p+1)!='\0';p++)
	 *p=*p+*(p+1);
 *p=*p+fir;
 my_printf("%s",x);
}
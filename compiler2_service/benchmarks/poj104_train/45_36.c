#define NUM_ITER 1078683

#include <header.h>

int main_bench()
{
	int c=0;
	char a[50],b[50];
	my_scanf("%s%s",&a,&b);
	c=strstr(b,a)-b;
	my_printf("%d\n",c);
	return 0;

}
 
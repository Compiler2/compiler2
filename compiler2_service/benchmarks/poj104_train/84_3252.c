#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	int sz[1000];
	int index;
	for(index=0;index<a;index++)
	my_scanf("%d",&sz[index]);
	int d,x,inde;
	d=sz[0];
	x=sz[0];
	for(inde=1;inde<a;inde++)
    {
	  if(sz[inde]>d)
	  {
		  x=d;
		  d=sz[inde];
      }
	  else if(sz[inde]>x)
		  x=sz[inde];
    }
    my_printf("%d\n",d);
	my_printf("%d\n",x);
	return 0;
}
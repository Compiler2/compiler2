#include <header.h>

int main_bench()
{
int j, i, x, y, a, m, n[100];

float sum=0;
my_scanf("%d", &m);
for(i=1;i<=m;i++)
  my_scanf("%d", &n[i]);
for(i=1;i<=m;i++)
{
	sum=0;
   x=2;
   y=1;
    for(j=1;j<=n[i];j++)
	{
	   sum+=(float)(x)/(float)(y);
	   a=x;
	   x=x+y;
	   y=a;
}
	my_printf("%.3f", sum);my_printf("\n");

}

return 0;
}
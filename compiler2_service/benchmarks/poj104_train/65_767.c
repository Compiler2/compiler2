#define NUM_ITER 40189

#include <header.h>

int main_bench()
{
	int n,ta=0,tb=0,i,a,b;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if (a==b) continue;
		if (a==1)
		  if (b==2) ta++;
		  else tb++;
        else if (a==2)
          if (b==1) tb++;
          else ta++;
        else if (a==0)
          if (b==1) ta++;
          else tb++;
	}
	if (ta>tb) my_printf("A\n");
	else if (ta<tb) my_printf("B\n");
	else my_printf("Tie\n");
}
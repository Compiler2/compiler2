#define NUM_ITER 37123

#include <header.h>

int main_bench()
{
	int n,a,b,sa=0,sb=0;
	int i;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if (a==b) continue;
		else if	(a==0&&b==1) sa++;
		else if (a==1&&b==0) sb++;
		else if (a==1&&b==2) sa++;
		else if (a==2&&b==1) sb++;
		else if (a==2&&b==0) sa++;
		else if (a==0&&b==2) sb++;
	}
	if (sa>sb) my_printf("A\n");
	else if (sb>sa) my_printf("B\n");
	else my_printf("Tie\n");
}
	
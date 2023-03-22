#define NUM_ITER 515906

#include <header.h>

int main_bench()
{
	int a,i,j,s;
	int b[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	my_scanf("%d",&a);
	if(a==7) my_printf("%d\n",1);
	i=1;
	while(i<=11)
	{
		s=0;
		for(j=1;j<=i;j++)
		{s=s+b[j];}
		if((s+12)%7+a==5||(s+12)%7+a==12) my_printf("%d\n",i+1);
		i=i+1;
	}
	return 0;
}
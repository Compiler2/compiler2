#include <header.h>

int main_bench()
{
	int i,j,m,s,t;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{for(j=2;j<=m;j++)
	{t=0;if(((m-i)!=j)&&(i!=j)&&((i%j==0)||((m-i)%j==0))){t=1;break;}}
	if(t==0)
		my_printf("%d %d\n",i,m-i);}

return 0;
}
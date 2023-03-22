#include <header.h>

int main_bench()
{
	double sl[10000],he=0;
	int m,i,n,j;
	my_scanf("%d\n",&m);
	sl[0]=2*1.0/1;
	for(i=0;i<9999;i++)
{
	sl[i+1]=1+1*1.0/sl[i];	
	}
for(i=0;i<m;i++)
{
	my_scanf("%d",&n);
    for(j=0;j<n;j++)
	{
       he+=sl[j];
	   }
	my_printf("%.3lf\n",he);
he=0;
}
return 0;
}













































































































	
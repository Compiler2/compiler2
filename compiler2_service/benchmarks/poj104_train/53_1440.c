#define NUM_ITER 8012

#include <header.h>

main_bench()
{
int n,j,k,i;
int ln[300];

my_scanf("%d",&n);
int T;
for(i=0;i<n;i++)
{
my_scanf("%d",&ln[i]);
}
my_printf("%d",ln[0]);
for(i=1;i<n;i++)
{T=1;
	for(k=i-1;k>0;k--)
	{
		if((ln[i]==ln[k])&&(T==1)) {T=-1;break;}
	}
	if((k==0)&&(T!=-1)&&(ln[i]!=ln[0]))	my_printf(",%d",ln[i]);
}

return 0;
}
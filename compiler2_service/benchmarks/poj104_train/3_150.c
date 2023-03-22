#include <header.h>

int main_bench()
{
	int i,n,sum,j,k,a[1000]={0},b[1000]={0};
my_scanf("%d %d",&n,&sum);

for(i=0;i<n;i++)
{   
  my_scanf("%d ",&a[i]);
  b[i]=a[i];
}
for(j=0;j<n;j++)
{
	for(k=j;k<n;k++)
	{
		if((a[j]+b[k])==sum)
		{ my_printf("yes"); return 0;}
	}
}  
 my_printf("no"); 


return 0;
}
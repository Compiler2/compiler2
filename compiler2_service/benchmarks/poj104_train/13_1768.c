#define NUM_ITER 8034

#include <header.h>

int main_bench()
{
    int a[12683],b[12683];
	int i,j,n,k;
	my_scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{	my_scanf("%d",&a[i]);
	b[i]=1;
	}
for(j=n-1;j>=0;j--)
{
for(k=0;k<j;k++)
{
if(a[k]==a[j])
{b[j]=0;
break;}
else
b[j]=1;}}
my_printf("%d",a[0]);
for(j=1;j<=n-1;j++)
{if(b[j]==1)
{my_printf(" ");
my_printf("%d",a[j]);}}
return 0;
}


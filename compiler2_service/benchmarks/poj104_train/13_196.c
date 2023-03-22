#define NUM_ITER 10104

#include <header.h>


int main_bench()
{
int n,i,j;
int a[20000],b[20000];

my_scanf("%d",&n);
for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);

b[0]=a[0];
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
	{if(a[i]==a[j])
	a[j]=0;}
}

j=0;
for(i=0;i<n;i++)
{if (a[i]==0) ;
else {b[j]=a[i];j++;}
}

for(i=0;i<j-1;i++)
	my_printf("%d ",b[i]);
my_printf("%d",b[j-1]);

}
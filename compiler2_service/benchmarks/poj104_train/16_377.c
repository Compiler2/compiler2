#define NUM_ITER 1292451

#include <header.h>

int main_bench()
{int a=0;
my_scanf("%d",&a);
int b[6]={0,0,0,0,0,0};
int c[5]={-1,-1,-1,-1,-1};
b[0]=a;
int i;
for( i=1;i<5;i++)
{	
	b[i]=b[i-1]/10;
}
for(i=0;i<5;i++)
{if(b[i]!=0)
	{c[i]=b[i]-10*b[i+1];
	if(c[i]>=0)
		my_printf("%d",c[i]);}}
if(a==0)my_printf("0");
}
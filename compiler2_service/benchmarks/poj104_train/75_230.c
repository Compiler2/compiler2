#include <header.h>

int main_bench()
{int i,t,j,n=0,m,a[1001]={0},b[1001]={0};
char e;
my_scanf("%d",&a[0]);
m=1;
my_scanf("%c",&e);
while(e==',')
{	my_scanf("%d",&a[m]);
	m++;
	my_scanf("%c",&e);
}
my_scanf("%d",&b[0]);
m=1;
my_scanf("%c",&e);
while(e==',')
{	my_scanf("%d",&b[m]);
	m++;
	my_scanf("%c",&e);
}
for(i=0;i<1000;i++)
{	t=0;
	for(j=0;j<m;j++)
	{if(i>=a[j]&&i<b[j])	t++;}
	if(t>n)
		n=t;
}
my_printf("%d %d",m,n);
return 0;
}

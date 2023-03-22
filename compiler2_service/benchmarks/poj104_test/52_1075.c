#include <header.h>

int main_bench()
{
	int a,b,c[1000],i,j,*p,t,m;
	my_scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
    my_scanf("%d",&c[i]);
	for(j=0;j<b;j++)
	{
		p=c;
	for(i=1,t=c[0];i<a;i++)
	{
		m=*(p+i);
		*(p+i)=t;
		t=m;
	}
     c[0]=t;
	}
	my_printf("%d",c[0]);
	for(i=1;i<a;i++)
    my_printf(" %d",c[i]);
	my_printf("\n");
}
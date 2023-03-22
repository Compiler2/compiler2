#include <header.h>

int main_bench()
{
	int i,n;my_scanf("%d",&n);
	int *p,*hd;hd=p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++,p++)
	{
		my_scanf("%d",p);
	}
	int max=0;
	for(p=hd,i=0;i<n;i++,p++)
	{
		if(*p>max) max=*p;
	}
	for(p=hd,i=0;i<n;i++,p++)
	{
		if(*p==max) *p=0;
	}
	my_printf("%d\n",max);max=0;
	for(p=hd,i=0;i<n;i++,p++)
	{
		if(*p>max) max=*p;
	}
	my_printf("%d",max);
}
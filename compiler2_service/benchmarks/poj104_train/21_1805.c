#include <header.h>

int main_bench()
{
	int a,b[300]={0},c,d,e,f=0,h,i;
	float g;
	my_scanf("%d",&a);
	for(c=0;c<a;c++)
		my_scanf("%d",&b[c]);
	for(c=0;c<a;c++)
	{
		for(d=0;d<a-c;d++)
		{
			if(b[d]>b[d+1])
			{
				e=b[d];
				b[d]=b[d+1];
				b[d+1]=e;
			}
		}
	}
	for(i=0;i<=a;i++)
        f=f+b[i];
	g=(float)f/a;
	if(fabs(b[1]-g)==fabs(b[a]-g))
		my_printf("%d,%d",b[1],b[a]);
    else if(fabs(b[1]-g)>fabs(b[a]-g))
		my_printf("%d",b[1]);
    else
		my_printf("%d",b[a]);
}
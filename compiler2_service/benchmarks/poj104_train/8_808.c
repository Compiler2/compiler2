#define NUM_ITER 2629

#include <header.h>

void a();
void b();
void c();
void d();
int x1[1000],x2[499],n1,n2;
int main_bench()
{
	
	a();
	b();
	c();
	d();
	
	return 0;
}

void a()
{
	int i;
	my_scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++)
		my_scanf("%d",&x1[i]);
	for(i=0;i<n2;i++)
		my_scanf("%d",&x2[i]);
}
void b()
{
	int i,j,p;
	for(i=0;i<n1-1;i++)
		for(j=i+1;j<n1;j++)
			if(x1[i]>x1[j])
			{
				p=x1[i];
				x1[i]=x1[j];
				x1[j]=p;
			}
    for(i=0;i<n2-1;i++)
		for(j=i+1;j<n2;j++)
			if(x2[i]>x2[j])
			{
				p=x2[i];
				x2[i]=x2[j];
				x2[j]=p;
			}
}
void c()
{
	int i;
	for(i=0;i<n2;i++)
		x1[n1+i]=x2[i];
}
void d()
{
	int i;
	for(i=0;i<n1+n2;i++)
	{
		my_printf("%d",x1[i]);
	    if(i<n1+n2-1)
		   my_printf(" ");
	}
}



#define NUM_ITER 2772

#include <header.h>

int A,B,a[300],b[300],c[600];
void w()
{
	int i;
	my_scanf("%d%d",&A,&B);
	for(i=0;i<A;i++)
		my_scanf("%d",&a[i]);
    for(i=0;i<B;i++)
		my_scanf("%d",&b[i]);
}
void x()
{
	int i,j,t;
	for(i=0;i<A-1;i++)
		for(j=0;j<A-1-i;j++)
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
     for(i=0;i<B-1;i++)
		for(j=0;j<B-1-i;j++)
			if(b[j]>b[j+1])
			{t=b[j];b[j]=b[j+1];b[j+1]=t;}
}
void y()
{
	int i;
    for(i=0;i<A+B;i++)
		if(i<A)c[i]=a[i];
		else c[i]=b[i-A];
}
void z()
{
	int i;
	for(i=0;i<A+B-1;i++)
		my_printf("%d ",c[i]);
    my_printf("%d",c[A+B-1]);
}
int main_bench()
{
	w();
	x();
	y();
	z();
}

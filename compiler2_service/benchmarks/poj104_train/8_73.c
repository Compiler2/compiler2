#define NUM_ITER 2874

#include <header.h>

int main_bench()
{
	int x,y,i,j,t;
	int a[100],b[100];
	my_scanf("%d%d",&x,&y);
	for(i=0;i<x;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<y;i++)
		my_scanf("%d",&b[i]);
	for(j=0;j<=x-1;j++)
		for(i=0;i<x-j-1;i++)
		if(a[i]>a[i+1])
		{	t=a[i];a[i]=a[i+1];a[i+1]=t;}
    for(j=0;j<=y-1;j++)
		for(i=0;i<y-j-1;i++)
		if(b[i]>b[i+1])
		{	t=b[i];b[i]=b[i+1];b[i+1]=t;}	
		for(i=0;i<x;i++)
				my_printf("%d ",a[i]);
            for(i=0;i<y-1;i++)
			{	my_printf("%d ",b[i]);}
			my_printf("%d",b[y-1]);
}
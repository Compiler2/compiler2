#define NUM_ITER 2441

#include <header.h>

int main_bench()
{
	int * change(int x[100],int y);
	int a1,a2,i;
	int *pt1,*pt2;
	int b[100],c[100];
	my_scanf("%d%d",&a1,&a2);
	for(i=0;i<a1;i++)
	{
		my_scanf("%d",&b[i]);
	}
	pt1=change(b,a1);
	for(i=0;i<a2;i++)
	{
		my_scanf("%d",&c[i]);
	}
	pt2=change(c,a2);
	for(i=0;i<a1;i++)
	{
		my_printf("%d ",*(pt1+i));
	}
	for(i=0;i<a2-1;i++)
	{
		my_printf("%d ",*(pt2+i));
	}
	my_printf("%d",*(pt2+a2-1));
}
int * change(int x[100],int y)
{
	int j,k,temp=0;
	for(j=1;j<y;j++)
	{
		for(k=0;k<y-j;k++)
		{
			if(x[k]>x[k+1])
			{
				temp=x[k+1];
				x[k+1]=x[k];
				x[k]=temp;
			}
		}
	}
	return(x);
}
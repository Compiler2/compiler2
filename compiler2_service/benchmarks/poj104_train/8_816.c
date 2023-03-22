#define NUM_ITER 2459

#include <header.h>

int main_bench()
{
	int a[100],b[100];
	int m,n,j,k;
	void f(int a[],int m);
	my_scanf("%d%d",&m,&n);
	for(j=0;j<m;j++)
	{
		my_scanf("%d",&a[j]);
	}
	for(k=0;k<n;k++)
	{
		my_scanf("%d",&b[k]);
	}
	f(a,m);
	my_printf(" ");
	f(b,n);
	return 0;
}
void f(int a[],int m)
{
	int i,l,s;
	for(i=1;i<m;i++)
	{
		for(l=0;l<m-i;l++)
		{
		   	if(a[l]>a[l+1])
			{s=a[l]; a[l]=a[l+1]; a[l+1]=s;}
	     } 
	}
     
      my_printf("%d",a[0]);
	  for(l=1;l<m;l++)
	  {
		  my_printf(" %d",a[l]);
	  }
}

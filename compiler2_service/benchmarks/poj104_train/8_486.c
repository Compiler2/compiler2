#define NUM_ITER 2817

#include <header.h>

void input(void);
void sort(int *a,int n,int *b,int m);
void merger(int *a,int n,int *b,int m);
void output(int *a,int n,int m);
int n,m,a[200],b[100];
void input(void)
{
	int i;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		my_scanf("%d",&b[i]);
}
void sort(int *a,int n,int *b,int m)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
    for(i=0;i<m-1;i++)
	{
		min=i;
		for(j=i+1;j<m;j++)
			if(b[j]<b[min])
				min=j;
		if(min!=i)
		{
			temp=b[i];
			b[i]=b[min];
			b[min]=temp;
		}
	}
}

void merger(int *a,int n,int *b,int m)
{
	int i,j;
	for(i=n,j=0;i<n+m,j<m;i++)
		a[i]=b[j++];
}

void output(int *a,int n,int m)
{
	int i;
	for(i=0;i<n+m-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d\n",a[n+m-1]);
}
int main_bench()
{
	input();
	sort(a,n,b,m);
	merger(a,n,b,m);
	output(a,n,m);
}
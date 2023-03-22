#define NUM_ITER 2380

#include <header.h>

int a[100],b[100];
int m,n;

void input()
{
	int i,j;
	my_scanf("%d%d",&m,&n);
	my_scanf("\n");
	for(i=0;i<m;i++)
		my_scanf("%d ",&a[i]);
	for(j=0;j<n-1;j++)
		my_scanf("%d ",&b[j]);
	my_scanf("%d",&b[n-1]);
	return;
}

void sort(int array[],int k)
{
	int i,j,t;
	for(j=0;j<k;j++)
		for(i=0;i<k-j;i++)
			if(array[i]>array[i+1])
			{
				t=array[i];
				array[i]=array[i+1];
				array[i+1]=t;
			}
			return;
}

void combine()
{
    int i,j=0;
	for(i=m;i<m+n;i++)
	{
		a[i]=b[j];
		j++;
	}
	return;
}

void output()
{
	int i;
	for(i=0;i<m+n-1;i++)
	my_printf("%d ",a[i]);
	my_printf("%d",a[m+n-1]);
	return;
}



int main_bench()
{
	input();
	sort(a,m-1);
	sort(b,n-1);
	combine();
	output();
	return 0;
}
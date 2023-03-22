#define NUM_ITER 4265

#include <header.h>

int n,m,N[100],M[100];
void scan()
{int i;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&N[i]);
	for(i=0;i<m;i++)
		my_scanf("%d",&M[i]);
}
void sort(int q,int a[])
{
	int i,j,k,t;
	for(i=0;i<q-1;i++)
	{k=i;
		for(j=i+1;j<q;j++)
			if(a[j]<a[k])  k=j;
		if(k!=i)
		{t=a[i];
		a[i]=a[k];
		a[k]=t;}
	}
}
void print()
{int i;
    my_printf("%d",N[0]);
	for(i=1;i<n;i++)
		my_printf(" %d",N[i]);
	for(i=0;i<m;i++)
		my_printf(" %d",M[i]);
	my_printf("\n");
}
int main_bench()
{
	scan();
	sort(n,N);
	sort(m,M);
	print();
}
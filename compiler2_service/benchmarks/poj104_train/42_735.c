#include <header.h>

int main_bench()
{
	int del(int *x,int n,int m);
int a[100000];
int *p;
p=a;
int n,m,i,k;

my_scanf("%d",&n);
for(i=0;i<n;i++)
my_scanf("%d",p+i);
my_scanf("%d",&m);
k=del(p,n,m);
for(i=0;i<n-k-1;i++)
my_printf("%d ",*(p+i));
my_printf("%d",*(p+n-k-1));
}
	int del(int *x,int n,int m)
	{int i,j,k=0;
	for(i=0;i<n;i++)
	{if(*(x+i)==m)
	{	for(j=i;j<n-k;j++)
	*(x+j)=*(x+j+1);
	k++;
	i--;
	}
	
	
	}
	return k;
	}
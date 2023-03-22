#include <header.h>

int n,m,a[100],b[100],c[200];
void f1()
{
	int i;
	my_scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		my_scanf("%d",&b[i]);
}

void f2(int k[],int l)
{
	int i,j,t;
	for(i=0;i<l-1;i++)
		for(j=i;j<l;j++)
			if(k[i]>k[j])
			{
				t=k[i];
				k[i]=k[j];
				k[j]=t;
			}
}

void f3()
{
	f2(a,m);
	f2(b,n);
    int i;
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=0;i<n;i++)
		c[i+m]=b[i];
}

void f4()
{
	int i;
	for(i=0;i<m+n-1;i++)
		my_printf("%d ",c[i]);
	my_printf("%d",c[m+n-1]);
}

int main_bench()
{
	f1();
    f3();
	f4();
}


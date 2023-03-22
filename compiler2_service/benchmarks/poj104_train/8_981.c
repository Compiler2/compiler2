#include <header.h>

int main_bench()
{
	int n,m,b[100],c[100],i;
	my_scanf("%d%d",&n,&m);
	void xu(int a[],int l);
	for(i=0;i<n;i++)
		my_scanf("%d",&b[i]);
	for(i=0;i<m;i++)
		my_scanf("%d",&c[i]);
	xu(b,n);
	xu(c,m);
	for(i=0;i<n;i++)
		my_printf("%d ",b[i]);
	for(i=0;i<m-1;i++)
		my_printf("%d ",c[i]);
	my_printf("%d\n",c[m-1]);
}

void xu(int a[],int l)
{
	int j=0,k,t;
	while(j<l)
	{
		k=j+1;
		while(k<l)
		{  
			if(*(a+j)>*(a+k)) {t=*(a+j);*(a+j)=*(a+k);*(a+k)=t;}
			k++;
		}
		j++;
	}
}
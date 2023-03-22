#include <header.h>

void change(int n,int m,int *p)
{
	int i,j,q;
	for(i=0;i<m;i++)
	{
		q=*(p+n-1);
		for(j=n-1;j>0;j--) *(p+j)=*(p+j-1);
		*p=q;
	}
}
int main_bench()
{
	int n,m,*p,i,q=0;
	my_scanf("%d%d",&n,&m);
	p=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++) my_scanf("%d",p+i);
	change(n,m,p);
	for(i=0;i<n-1;i++) my_printf("%d ",*(p+i));
	my_printf("%d\n",*(p+i));
}
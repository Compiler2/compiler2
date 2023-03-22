#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int a[200][200],t,n,m,i,j,s;
	int (*p)[200];
	my_scanf("%d",&t);
	while (t--)
	{
		my_scanf("%d%d",&n,&m);
		p=a;
		for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		my_scanf("%d",*(p+i)+j);
		s=0;
		for (i=0;i<m;i++) s=s+*(*p+i);
		if (n>1)
		for (i=0;i<m;i++) s=s+*(*(p+n-1)+i);
		for (i=1;i<n-1;i++) s=s+*(*(p+i));
		if (m>1)
		for (i=1;i<n-1;i++) s=s+*(*(p+i)+m-1);
		my_printf("%d\n",s);
	}
} 
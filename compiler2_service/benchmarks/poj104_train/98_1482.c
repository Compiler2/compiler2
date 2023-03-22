#define NUM_ITER 29825

#include <header.h>

int main_bench()
{
	char a[500][41];
	int n,i,k,b[500];
	int *p1;
	char (*p2)[41];
	my_scanf("%d",&n);
	for(i=0,p2=a,p1=b;i<n;i++,p1++,p2++)
	{
		my_scanf("%s",*p2);
		b[i]=strlen(*p2);
	}
	p2=a;p1=b;
	for(i=0,k=*p1+1;i<n-1;i++,p2++,p1++)
	{
		k=k+*(p1+1);
		my_printf("%s",*p2);
		if(k>80)
		{
			my_printf("\n");
			k=*(p1+1)+1;
		}
		else 
		{
			my_printf(" ");
			k=k+1;
		}
	}
	p2=a;
	my_printf("%s",*(p2+n-1));
}
#define NUM_ITER 1761289

#include <header.h>

int main_bench()
{
	char c;
	int a[300],i,t,m=0,n=0;
	my_scanf("%d",&a[0]);
	for(i=1;;i++)
		{c=getchar();
	     if(c==',')my_scanf("%d",&a[i]);
		 else break;}
	t=i;
	for(i=0;i<t;i++)
	    if(a[i]>m)
			m=a[i];
	for(i=0;i<t;i++)
	    if(a[i]>n&&a[i]<m)
			n=a[i];
	if(n)my_printf("%d",n);
	else my_printf("No");
}
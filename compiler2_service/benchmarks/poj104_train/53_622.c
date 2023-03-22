#define NUM_ITER 47769

#include <header.h>

int main_bench()
{
	int a[300]={0},b[300],n,*p,*q,t=0,i,*j;
	my_scanf("%d",&n);
	for(p=a,i=0;i<n;p++,i++)
		my_scanf("%d",p);
	j=b;
	p=a;
	*j=*p;
	p++;
    while(*p!=0)
	{
		for(q=b;q<=j-t;q++)
			if(*p==*q)
			{
				t++;
				goto A;
			}
		*(j+1-t)=*p;
A:		j++;
		p++;
	}
	for(q=b;q<j-t;q++)
		my_printf("%d,",*q);
	my_printf("%d\n",*(j-t));
}
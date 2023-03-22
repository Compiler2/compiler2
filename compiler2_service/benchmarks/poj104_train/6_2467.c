#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int c[10000],i,k,a,b,n,s=0;
	int *p,*q;
	p=c;q=p;
	my_scanf("%d",&n);
for(k=0;k<n;k++)
{
    p=c;q=p;s=0;
	my_scanf("%d %d",&b,&a);
    	
        for(i=0;i<a*b;i++)
	{
	
		  my_scanf("%d",&*p);
		  p++;
	}
	p=q;
	for(i=0;i<a;i++)
	{
		s=s+*p;
		p++;
	}
	p=q;
	for(i=0;i<b-2;i++)
	{
		p=p+a;
		s=s+*p;
		
	}
	p=q+a-1;
	for(i=0;i<b-2;i++)
	{
		p=p+a;
		s=s+*p;
		
		
	}
	if(b!=1)
	{
	p=q+a*(b-1);
	for(i=0;i<a;i++)
	{
		
		s=s+*p;
		p=p+1;
		
	}
	}
	my_printf("%d\n",s);


}


}
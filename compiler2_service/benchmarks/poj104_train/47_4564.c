#include <header.h>

int main_bench()
{
	int s[100],n,*p,*q,i,temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",s+i);
	p=s;
	q=s+n-1;
	while(p<q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;
		q--;
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",*(s+i));
	my_printf("%d",*(s+n-1));
	return 0;
}
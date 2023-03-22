#include <header.h>

int main_bench()
{
	int n,a[100000],*p,i,k,*temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for(p=a;p<a+n;p++)
		if(*p==k)
		{
			temp=p;
			for(;p<a+n;p++)
				*p=*(p+1);
			n--;
			p=temp-1;
		}
		for(p=a;p<a+n-1;p++)
			my_printf("%d ",*p);
		my_printf("%d",*p);
}

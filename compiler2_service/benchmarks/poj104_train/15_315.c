#define NUM_ITER 686

#include <header.h>

int main_bench()
{
	int n,feiwu,x,l,s,i;
	my_scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{
		my_scanf("%d",&feiwu);
		if(feiwu==0)
		{x=i+1;break;}
	}
	for(i++;i<n*n;i++)
	{
		my_scanf("%d",&feiwu);
		if(feiwu!=0)
		{l=i;break;}
	}
	s=l-x+1;
    for(i++;i<n*n;i++)
	{
		my_scanf("%d",&feiwu);
		if(feiwu==0)
			s++;
	}
	my_printf("%d",(l-x-1)*(s-2*(l-x+1))/2);
	return 0;
}

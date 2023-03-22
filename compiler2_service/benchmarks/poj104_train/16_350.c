#include <header.h>




int main_bench()
{
    int n,i,k,s;
	my_scanf("%d",&n);
	i=n;
	s=0;
	while(i>0)
	{
        k=i%10;
		if(k==0) my_printf("0"),i/=10;
		else
		{
		   i=i/10;
		   s=s*10+k;
        }
    }
	my_printf("%d\n",s);
	return 0;
}

#define NUM_ITER 104789

#include <header.h>

int main_bench()
{
    int a,b,c,d,s=0,n,i=1;
	my_scanf ("%d",&n);
	do
	{
		a=i/10;
		b=i-a*10;
		c=i/7;
		d=i-7*c;
		s=s+i*i;
        if(a==7||b==7||d==0)
		{
			s=s-i*i;
		}
		i++;
	}while(i<=n);
	my_printf("%d",s);
	return 0;
}
#define NUM_ITER 38092

#include <header.h>

int main_bench()
{
	int n,a,b,c,i,d=0,e=0;
	my_scanf("%d",&n);
    for( i=3;i<=n/2;i=i+2)
	{
		for( a=2;a<i;a++)
		{
			if(i%a==0)
			{d=1;break;}
			else {d=0;} 
		}
		if(d==0)
		{
		b=n-i;
		for( c=3;c<b;c=c+2)
		{
			if(b%c==0)
			
		

        {e=1;break;}
			else {e=0;} 


		}
		}
		else {continue;}
			if(e==0&&d==0)
			my_printf("%d %d\n",i,b);
			else{ continue;}
		
	}return 0;
}
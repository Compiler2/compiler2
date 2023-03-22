#include <header.h>

int main_bench()
{
	int a,b=0,c=0,d,i=0,n;
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
{
		my_scanf("%d",&a);

	     if(a>c)
		 {
            c=a;
            
		 }
		    
	     if(b<c)
		 {
            d=b;
			b=c;
			c=d;
			d=0;
		 }
}
	 my_printf("%d\n%d",b,c);
	return 0;
}
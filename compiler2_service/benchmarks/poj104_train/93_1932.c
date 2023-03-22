#define NUM_ITER 1226736

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g,x,h,i,j,k,l,m,n,s;
	my_scanf("%d",&x);
	a=3;
	b=5;
	c=7;
	d=a*b*c;
	e=a*b;
	f=a*c;
	g=b*c;
	h=x%d;
	i=x%e;
	j=x%f;
	k=x%g;
	l=x%a;
	m=x%b;
	n=x%c;
	s=l*m*n;
	if(h==0)	my_printf("%d %d %d",a,b,c);
	else if(i==0)	my_printf("%d %d",a,b);
		 else if(j==0)	my_printf("%d %d",a,c);
              else if(k==0)	my_printf("%d %d",b,c);  
			       else if(l==0)	my_printf("%d",a);  
				   else if(m==0)	my_printf("%d",b); 
				   else if(n==0)	my_printf("%d",c);  
			       
			       else

	my_printf("n");

}
#include <header.h>

int main_bench()
{
	int k,i,j,a,b,c,m,n,p;
	my_scanf("%d\n",&k);
	m=0;
	p=0;
    for(i=1;i<=k;i++)
	{   
		my_scanf("%d\n",&a);
		  if(a>=m)
			{ n=a;
		      if(p>m)
			  j=p;
			  else
			  j=m;
			}
          else
			{n=m;
			 if(p>a)
			  j=p;
			  else
			  j=a;
			}
			m=n;
			p=j;
			
		
	}
	my_printf("%d\n%d\n",n,j);
	
}
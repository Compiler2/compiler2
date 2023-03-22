#include <header.h>

int main_bench()
{long int i,n,q=0,w=0,e=0,a,b,t;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	q=a;
	my_scanf("%d",&a);
	w=a;
	if (q<w){t=q;q=w;w=t;}

for(i=1;i<=n-2;i++)
{
	my_scanf("%d",&a);
	if(a>q){w=q;q=a;}
	else if(a>w)w=a;
	
	



}
my_printf("%d\n%d\n",q,w);

}

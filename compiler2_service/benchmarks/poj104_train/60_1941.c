#include <header.h>

int pa(int n)
{int k=1,i;
for(i=2;i*i<=n;i++)
if(n%i==0){k=0;break;}
return k;
} 
int main_bench()
{
	int n,k=1;
	my_scanf("%d",&n);
	for(int i=1;2*i+3<=n;i++)
	if(pa(2*i+1))if(pa(2*i+3))
	{
		k=0;my_printf("%d %d\n",2*i+1,2*i+3);
	} 
	if(k) my_printf("empty");
}
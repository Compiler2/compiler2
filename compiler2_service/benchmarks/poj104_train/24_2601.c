#define NUM_ITER 32314

#include <header.h>

int main_bench()
{	
	int n,i,j,m,a=0,b=100,p,t;	
	char c[203][1050];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			my_scanf("%s",c[i]);
			strlen(c[i]);
			if(strlen(c[i])>a)
			{
				a=strlen(c[i]);
				p=i;
			}
			if(strlen(c[i])<b)
			{
				b=strlen(c[i]);
				t=i;
			}	
	}
	my_printf("%s\n",c[p]);
	my_printf("%s\n",c[t]);
	return 0;
}

#define NUM_ITER 10700

#include <header.h>

int main_bench()
{
	int i,j,k,l,m,n,c,d,e,f;
	int a,b,g[60];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m);
		if(m==0) my_printf("60\n");
		else 
		{
			a=b=0;
		   
			for(k=0;k<60;k++) g[k]=0;
			for(k=0;k<m;k++) my_scanf("%d",&g[k]);
            k=0;
			for(;b<60;)
			{
				a++;b++;
			    if(a==g[k]) {b+=3;k++;}
				
			}
			my_printf("%d\n",a);
		}
	}
	return 0;
}

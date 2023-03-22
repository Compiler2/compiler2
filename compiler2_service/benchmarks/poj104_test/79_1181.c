#include <header.h>

int main_bench()
{
	int m,n;
	int *p;
	int i,j,k;
	for(;;)
	{
		my_scanf("%d%d",&n,&m);
		if(m==0)break;
		else if(n==1) my_printf("1\n");
	
		else
		{p=(int*)malloc(sizeof(int)*(n));
	for(i=0;i<n;i++) 
		p[i]=0;
	k=n;
	j=1;
	for(i=0;i<n;i=(i+1)%n)
	{
		
		if(p[i])continue;
		
		if(j++==m)
		{
			k--;
			p[i]=1;
			j=1;
		}
	
		if(k==0)
		{
			my_printf("%d\n",i+1);break;
		}
		
	}free(p);
	}
	}
return;
}

#include <header.h>


int main_bench()
{
	int num[100],n,i,k,m;
	my_scanf("%d %d",&n,&m);	
	for(i=0;i<=(n-1);i++)
	{
		my_scanf("%d",&num[i]);
	}
	int*p=num;
	while(m!=0)
	{
		int t=*(num+n-1);
	    for(p=num+n-1;p>num;p--)
		    *p=*(p-1);
	    *p=t;
		m--;
	}
	for(k=0;k<n;k++)
	{
		if(k==0)my_printf("%d",num[k]);
		else my_printf(" %d",num[k]);
	}
	return 0;
}


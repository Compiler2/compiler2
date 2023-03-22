#include <header.h>

int main_bench()
{
	int n,i,*p,k,m,j;
	my_scanf("%d",&n);
	m=n;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		my_scanf("%d",(p+i));
	}
    my_scanf("%d",&k);
	for(i=0;i<m;i++)
	{
		if(*(p+i)==k)
		{
			for(j=i;j<m-1;j++)
			{
				*(p+j)=*(p+j+1);
			}
			i--;
	    	m--;
		}
	}
	for(i=0;i<m-1;i++)
	{
		my_printf("%d ",*(p+i));
	}
    my_printf("%d",*(p+m-1));
	return 0;
}

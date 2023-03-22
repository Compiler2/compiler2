#define NUM_ITER 8120

#include <header.h>

int main_bench()
{
	int n,i,j,l;
    int *m;
    my_scanf("%d",&n);
	m=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",m+i);
	}
	my_printf("%d",*m);
	for(i=1;i<n;i++)
	{
		l=0;
		for(j=0;j<i;j++)
		{  
		   if(*(m+i)==*(m+j))
		   {
			   l=1;
			   break;
		   }
		}
        if(l==0)
		   {
              my_printf(" %d",*(m+i));
		   }
	}
	free(m);
	return 0;
}
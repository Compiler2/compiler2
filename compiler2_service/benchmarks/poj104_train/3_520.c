#define NUM_ITER 50647

#include <header.h>

int main_bench()
{
	int n,k,i,j,*pt,flag=1;
	my_scanf("%d%d",&n,&k);
	pt=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		my_scanf("%d",pt+i);
	for(i=0;i<n-1;i++)
		if(flag)
		for(j=i+1;j<n;j++)
			if((pt[i]+pt[j])==k)
			{
				flag=0;
				break;
			}
			if(flag)
				my_printf("no\n");
			else
				my_printf("yes\n");
			free(pt);
}
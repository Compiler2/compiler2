#define NUM_ITER 12811

#include <header.h>

int main_bench()
{
	int n,m=0,i,j,k=0;
	my_scanf("%d",&n);
	int s[305],a[305]={-1};
	for(i=0;i<n;i++)
	{my_scanf("%d",&s[i]);}
    for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<m;j++)
		{	if(s[i]==a[j])
		{	break;}
		else {k++;continue;}
		}
		if(k==m)
		{a[m]=s[i];m++;k=0;}
	}

	for(i=0;i<m;i++)
	{if(i==0)
	my_printf("%d",a[i]);
	else
 my_printf(",%d",a[i]);
	}
	return 0;
}

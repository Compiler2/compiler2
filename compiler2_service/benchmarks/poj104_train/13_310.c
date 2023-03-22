#define NUM_ITER 8047

#include <header.h>

int main_bench()
{
	int a[20000],b[20000];
	int n,i,m,p=0,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		for(m=0;m<i;m++)
		{
			if(a[i]==a[m])break;
		}
        if(m==i)
		{
			p=p+1;
			b[p]=a[i];
		}
		
    }
	for(l=1;l<=p;l++)
	{
		if(l==p)my_printf("%d",b[l]);
		else my_printf("%d ",b[l]);
	}
	return 0;
	
}

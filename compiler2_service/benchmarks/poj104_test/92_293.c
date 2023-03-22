#define NUM_ITER 1974339

#include <header.h>

int cmp(const void*e1,const void *e2)
{
	return *((int*)e2)-*((int*)e1);
}
int main_bench()
{
	int n,a[1000],b[1000],i,j,k,s,t,result;
	while(my_scanf("%d",&n) && n )
	{
		for(i=0;i<n;++i)
			my_scanf("%d",&b[i]);
		qsort(b,n,sizeof(int),cmp);
		for(i=0;i<n;++i)
			my_scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),cmp);
		i=k=0;
		j=s=n-1;
		result=0;
		for(t=0;t<n;++t)
		{
			if(b[i]>a[k]) 
			{
				result+=200;
				++i;
				++k;
			}
			else if(b[j]>a[s])
			{
				result+=200;
				--j;
				--s;
			}
			else 
			{
				if(b[j]>a[k])
					result+=200;
				else if(b[j]<a[k])
					result-=200;
				--j;
				++k;
			}
		}
		my_printf("%d\n",result);
	}
	return 0;
}
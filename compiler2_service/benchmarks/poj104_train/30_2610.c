#define NUM_ITER 57186

#include <header.h>

int main_bench()
{
	int a[100],i,n,j=-1,s=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0) continue;
		else if(i%10==7) continue;
		else if(i/10%10==7) continue;
		else {j++;a[j]=i;}
	}
	for(i=0;i<=j;i++)
		s=s+a[i]*a[i];
	my_printf("%d\n",s);
}

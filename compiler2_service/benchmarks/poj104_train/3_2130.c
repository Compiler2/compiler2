#define NUM_ITER 59917

#include <header.h>

int main_bench()
{
	int n,k,i,j,l,w;
	int a[1000];
	my_scanf("%d %d",&n,&k);
	if(n<=0) my_printf("no");
	l=0;
	i=0;
	while(l<=n-1)
	{
		my_scanf("%d",&a[l]);
		l++;
	}
	while(i<n-1)
	{
		j=n-1;
		while(j>i)
		{
			w=a[i]+a[j];
			j--;
			if(w==k) {my_printf("yes");break;}
		}
		if(w==k) {break;}
		i++;
	}
	if(i==n-1) my_printf("no");

	return 0;
}

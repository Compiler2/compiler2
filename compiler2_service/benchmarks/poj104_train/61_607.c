#include <header.h>


int main_bench()
{
	int sz[100],i,n,a;
	my_scanf("%d",&n);
	sz[0]=1;
	sz[1]=1;
	for(i=2;i<100;i++){
        sz[i]=sz[i-1]+sz[i-2];
	}
	for(i=0;i<n;i++){
        my_scanf("%d",&a);
		my_printf("%d\n",sz[a-1]);
	}
	return 0;
}

#define NUM_ITER 54245

#include <header.h>

int main_bench()
{
	int n=0;
    my_scanf("%d",&n);
	int sz[100];
	int x;
	for(int i=0;i<n;i++){
		my_scanf("%d",&x);
	    sz[i]=x;}
	for(int j=n-1;j>=0;j--){
		if(j!=0)
		{
			my_printf("%d ",sz[j]);
		}
		else
		{
			my_printf("%d",sz[j]);
		}
	}
	return 0;
}

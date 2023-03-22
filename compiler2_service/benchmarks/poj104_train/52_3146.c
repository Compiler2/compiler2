#define NUM_ITER 2987

#include <header.h>

int main_bench()
{
	int m,n;
	my_scanf("%d%d",&n,&m);
	int i,j,sz[n],a;
         int *ptr;
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(j=0;j<m;j++){
                  ptr=&sz[n-1];
                  a=*ptr;
		for(i=n-1;i>0;i--){
			sz[i]=sz[i-1];
		}
                  sz[0]=a;
	}
	for(i=0;i<n-1;i++){
		my_printf("%d ",sz[i]);
	}
         my_printf("%d",sz[n-1]);
	return 0;
}
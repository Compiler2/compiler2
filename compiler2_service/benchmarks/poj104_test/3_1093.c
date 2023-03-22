#define NUM_ITER 4458

#include <header.h>

int main_bench()
{
	int n,k,i,j,a[1000],m,t=0;
	my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	if((n==1)&&(a[0]==k)){
           t=1;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j)
				m=a[i]+a[j];
			if(m==k)
				t=1;
		}	
	}
       	if(t==1)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}
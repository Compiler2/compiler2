#define NUM_ITER 3220

#include <header.h>

int main_bench()
{
	int sum,n,a[1000],i,b[1000],j,p=0,h=0,k;
	my_scanf("%d %d",&n,&sum);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(k=0;k<n;k++){
		for(j=0;j<n;j++){
			h=a[k]+b[j];
			if(h==sum)
				p++;
		}
	}
	if(p==0)
		my_printf("no\n");
	else
		my_printf("yes\n");
	return 0;
}

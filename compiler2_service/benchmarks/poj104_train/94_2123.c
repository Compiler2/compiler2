#define NUM_ITER 3157

#include <header.h>

int main_bench()
{
	int N,i,b=0,j,c;
	int a[501]={0};

	my_scanf("%d",&N);
	for(i=1;i<=N;i++)
		my_scanf("%d",&a[i]);
	for(j=1;j<N;j++){
		for(i=0;i<N;i++){
			if(a[i]>a[i+1]){
				c=a[i+1];
				a[i+1]=a[i];
				a[i]=c;
			}
		}
	}

	for(i=1;i<=N;i++){
		if(a[i]%2==1&&b==0){
			my_printf("%d",a[i]);
			b=b+1;
		}
		else if(a[i]%2==1&&b!=0)
			my_printf(",%d",a[i]);


	}
	
	return 0;
}
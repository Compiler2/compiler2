#define NUM_ITER 32826

#include <header.h>

int main_bench()
{
    int n,a[200],b[200],c=0,d=0;
	my_scanf("%d",&n);
	int i=0;
	for (i=0;i<n;i++){
	my_scanf("%d%d",&a[i],&b[i]);
	}
	for (i=0;i<n;i++){
	if(a[i]==0&&b[i]==1){
		c=c+1;
	}
	else if(a[i]==0&&b[i]==2){
		d=d+1;
	}
	else if(a[i]==1&&b[i]==0){
		d=d+1;
	}
	else if(a[i]==1&&b[i]==2){
		c=c+1;
	}
	else if(a[i]==2&&b[i]==0){
		c=c+1;
	}
	else if(a[i]==2&&b[i]==1){
		d=d+1;
	}
	}
		if(c<d){
			my_printf("B");
		}
		else if(c>d){
			my_printf("A");
		}
     	else {
			my_printf("Tie");
		}
 return 0;
}

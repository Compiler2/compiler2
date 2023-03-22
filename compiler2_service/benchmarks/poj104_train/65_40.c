#define NUM_ITER 33957

#include <header.h>

int main_bench(){
	int n,i,x,y;
	int a[3]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&x,&y);
		if(x-y==1)
			a[2]++;
		if(y-x==1)
			a[1]++;
		if(x-y==2)
			a[1]++;
		if(y-x==2)
			a[2]++;
	}
	if(a[1]>a[2])
		my_printf("A");
	else if(a[1]<a[2])
		my_printf("B");
	else
		my_printf("Tie");
	return 0;
}

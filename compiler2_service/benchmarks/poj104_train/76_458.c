#define NUM_ITER 1895

#include <header.h>

int main_bench(){
int n,i,min,max;
my_scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
	my_scanf("%d %d",&(a[i]),&(b[i]));
}
min=a[0];
max=b[0];
for(i=0;i<n;i++){
	if(a[i]<min){
		min=a[i];
	}
}
for(i=0;i<n;i++){
	if(b[i]>max){
		max=b[i];
	}
}
double h;
int k=0;
for(h=min;h<=max;h=h+0.5){
	for(i=0;i<n;i++){
		if(h<=b[i]&&h>=a[i]){
			k=1;
		}
	}
		if(k==0){
			my_printf("no");
                        break;
		}
		if(h==max){
			my_printf("%d %d",min,max);
		}
		k=0;
}
	return 0;
}
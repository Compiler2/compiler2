#define NUM_ITER 34245

#include <header.h>

int main_bench(){
	int a[1000],b[1000],n,i=0,t=0,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i=i+1){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i=i+1){
		if(a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90){
			t=t+1;
			if(t>max){
				max=t;
			}
		}
		else {
            t=0;
			
		}
	}
	my_printf("%d",max);
	return 0;
}
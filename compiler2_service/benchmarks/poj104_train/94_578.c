#define NUM_ITER 16827

#include <header.h>

int main_bench(){
	int n,num[500],l,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&num[i]);
	}
	int t=0,m[500];
	for(i=0;i<n;i++){
		if(num[i]%2!=0){
			m[t]=num[i];
			t++;
		}
	}
	for(i=0;i<t;i++){
		for(l=t;l>i;l--){
			if(m[l]<m[l-1]){
				int k=m[l];
				m[l]=m[l-1];
				m[l-1]=k;
			}
		}
	}
	for(i=1;i<t;i++){
		my_printf("%d,",m[i]);
	}
	for(i=t;i<t+1;i++){
		my_printf("%d\n",m[i]);
	}
	return 0;
}
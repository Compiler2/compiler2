#define NUM_ITER 3942

#include <header.h>

int main_bench() {
	int a[999],b[999],c[999],i,k,n,d[999];
		my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&d[i]);
		a[i]=1;
		b[i]=1;
	}
	for(i=0;i<n;i++){
		if(d[i]>=3){
			for(k=3;k<=d[i];k++){
			c[i]=a[i]+b[i];
			a[i]=b[i];
			b[i]=c[i];}
		my_printf("%d\n",c[i]);}
		else{my_printf("1");}
	}
		


	 return 0;
}
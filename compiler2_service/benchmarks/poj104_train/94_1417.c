#define NUM_ITER 16167

#include <header.h>

int main_bench(){
	int N,i,k,e,h,t;
	h=0;
	int a[500];
	int b[500];
	int c[500]={0};
	my_scanf("%d",&N);
	for(i=0;i<N;i++){
		my_scanf("%d",&a[i]);
		 if(a[i]%2!=0){
	         c[i]=1;
			 b[h]=a[i];
             h+=c[i];
		}

	}
	t=h;
	for(k=1;k<=t;k++){
		for(h=0;h<t-k;h++){
			if(b[h]>b[h+1]){
				e=b[h+1];
				b[h+1]=b[h];
				b[h]=e;
			}
		}
	}
    for(h=0;h<t;h++){
		if(h==t-1){
		 my_printf("%d",b[h]);
		}else{
		 my_printf("%d%c",b[h],',');
		}
	}
	return 0;
}
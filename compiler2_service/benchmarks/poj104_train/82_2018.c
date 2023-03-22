#define NUM_ITER 33510

#include <header.h>

int main_bench(){
    int k;
	my_scanf("%d",&k);
	int sz[1000],dz[1000],a,i,sz3[1000],b;
	a=0;
	for(i=0 ; i<k ; i++){
		my_scanf("%d %d",&sz[i],&dz[i]);
		
		if(sz[i]>=90 && sz[i]<=140 && dz[i]<=90 && dz[i]>=60){
		a=a+1;
		sz3[i]=a;
		}
		else{
			a=0;
		}
	}
	b=sz3[0];
	for(i=0 ; i<k ;i++){
	
			if(sz3[i]>b){
				b=sz3[i];}
	}


	my_printf("%d",b);
	return 0;
}


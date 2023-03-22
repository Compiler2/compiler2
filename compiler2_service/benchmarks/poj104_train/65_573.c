#define NUM_ITER 35757

#include <header.h>


int main_bench(){
	int i,n,a=0,b=0,c,d;
	my_scanf("%d",&n);

    for(i=0;i<n;i++){
		my_scanf("%d%d",&c,&d);
		if(((c+1)==d)||((c-2)==d)){
			a++;
		}
         else if(((d+1)==c)||((d-2)==c)){
			b++;
		}	
	}

	if(a<b){
		my_printf("B");
	}else if(a==b){
		my_printf("Tie");
	}else{
		my_printf("A");
	}




		return 0;
}
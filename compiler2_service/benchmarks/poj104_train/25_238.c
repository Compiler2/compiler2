#define NUM_ITER 472

#include <header.h>

int main_bench(){
	int n,i,p;
	int an1[500]={0},an2[500]={0},sum[500]={0};
	 an1[0]=1;
	 an2[0]=1;
    my_scanf("%d",&n);
	if(n==0){
		my_printf("1");
	}
	else{
	for(p=0;p<n;p++){
        int carry = 0;       
	    for (i = 0; i < 500; i++){
	    	sum[i] = an1[i] + an2[i] + carry;
		  if(sum[i] >= 10){
		    sum[i] -= 10;
		    carry = 1;
		  } else {
		    carry = 0;
		  }
		}
		for(i=0;i<500;i++){
            an1[i]=an2[i]=sum[i];
		}
	}
      i = 500-1;
	while(sum[i]==0) {          
		 i--; 
	  }
	for(;i>=0;i--){                    
		my_printf("%d", sum[i]);   
	}
	my_printf("\n");
	}
	return 0;
}

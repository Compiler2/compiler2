#define NUM_ITER 2797

#include <header.h>

int main_bench(){
	int num[500],n,i,j=0,k=0,l=0,a;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&num[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;i<n-1;i++){
			if(num[i]>num[i+1]){
				a=num[i+1];
				num[i+1]=num[i];
				num[i]=a;
	}
		}
	}
	for(i=0;i<n;i++){
        if(num[i]%2!=0){
           k++;}
	}
      	for(i=0;i<n;i++){ 
			 if(num[i]%2!=0){
				 l++;
					 if(l<k){
						 my_printf("%d,",num[i]);}
					 else{
						 my_printf("%d",num[i]);}
			 }
		}
   return 0;
	}
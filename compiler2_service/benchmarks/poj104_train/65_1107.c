#define NUM_ITER 41325

#include <header.h>

int main_bench(){
	int n,i,k=0,l=0;
	int a[200],b[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
         my_scanf("%d%d",&a[i],&b[i]);
		 if(a[i]==1){
			 if(b[i]<a[i]){
				 l=l+1;
			 }
			 else if(b[i]>a[i]){
                 k=k+1;
			 }
		 }
        if(a[i]==2){
			 if(b[i]==0){
				 k=k+1;
			 }
			 else if(b[i]==1){
                 l=l+1;
			 }
		 }
       if(a[i]==0){
			 if(b[i]==1){
				 k=k+1;
			 }
			 else if(b[i]==2){
                 l=l+1;
			 }
		 }
	   }
	if(k>l){
		my_printf("A");
	}
	else if(k<l){
		my_printf("B");
	}
	else if(k==l){
		my_printf("Tie");
	}
	return 0;
}
#define NUM_ITER 42414

#include <header.h>

int main_bench(){
	int n,a,u[100000];

	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&u[i]);
		}
		my_scanf("%d",&a);
	         
		for(int i=0;i<n;i++){
			if(u[i]==a){
			  for(int j=i;j<n-1;j++){
					u[j]=u[j+1];}
				i--;
				n--;}}
		for(int i=0;i<n;i++){
			if(i==n-1){
				my_printf("%d",u[i]);}
			else{ 
      		my_printf("%d ",u[i]);}
			  }
			my_scanf("%d",&n);
	return 0;
	}
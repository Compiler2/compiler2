#define NUM_ITER 5616

#include <header.h>

int main_bench(){
	int s,i,sz[100],n,e,z,k,l;
	my_scanf("%d",&n);
    for(l=0;l<n;l++){
	   my_scanf("%d",&sz[l]);
      if(sz[l]%2==0){
		   sz[l]=0;
	}}
	
	for(s=1;s<=n;s++){
	  for( i = 0; i < n - s; i++){
		  if(sz[i] > sz[i+1]){
					e = sz[i+1];
					sz[i+1] = sz[i];
					sz[i] = e;
			}
	}}
     for(z=0;z<n-1;z++){
		 if(sz[z]!=0){
		 my_printf("%d,",sz[z]);
	 }}my_printf("%d",sz[n-1]);
     return 0;
	}
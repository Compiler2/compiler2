#define NUM_ITER 54449

#include <header.h>

int main_bench(){
	int sz[1000],n,i,k,d,e;
	my_scanf("%d %d",&n,&e);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
    for(k=0;k<n-1;k++){
		if(k==n-2){
			  my_printf("no");
			  break;}
       for(i=k+1;i<n;i++){
		   d=sz[k]+sz[i];
		   if(d==e){
		my_printf("yes");
		break;}
	   }
		   if(d==e){
		break;} 
	   }
		  return 0;
		  }
	   
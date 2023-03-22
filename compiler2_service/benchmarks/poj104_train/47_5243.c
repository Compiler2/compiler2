#define NUM_ITER 2216118

#include <header.h>

int main_bench(){
    
    int m,n,i;
    my_scanf("%d",&n);
    int sz[100];
	if((n>1)&&(n<100)){
	  for(i=0;i<n;i++){
		  my_scanf("%d",&(sz[i]));
	  }
	  for(m=n-1;m>=0;m--){
          if(m>0){
              my_printf("%d ",sz[m]);
              }
		  else
              my_printf("%d",sz[m]);
	  }
	}
	return 0;
}


#define NUM_ITER 150577

#include <header.h>

  int main_bench(){
  char sz[200];
  gets(sz);
  int k;
  for(int i=0;i<100;i++){
    for(k=0;sz[k]!='\0';k++){
	    if(sz[k]==' '){
		      if(sz[k+1]==' '){
			      for(;sz[k]!='\0';k++){
			        sz[k]=sz[k+1];
				  }
			  }
		}
	}
  }
  puts(sz);
  return 0;
}
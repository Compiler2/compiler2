#define NUM_ITER 1142246

#include <header.h>

int main_bench(){
  int n,l,i,m;
  char z[1000],c;
  gets(z);
  l=strlen(z);
  m=l;
  for(int t=0;t<l;t++){
	  for(i=0;i<l;i++){
		  if(z[i]==' '){
			  if(z[i+1]==' '){
				  for(i;i<l;i++){
					  z[i]=z[i+1];
				  }
			      z[m-1]=0;m--;i--;
			  }
		  }
	  } 
  }
  my_printf("%s",z);
return 0;
}
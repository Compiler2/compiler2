#define NUM_ITER 17406

#include <header.h>

int main_bench(){
    int N,i,n,j;
    my_scanf("%d",&N);
    int sz[N];
    for(i=0;i<N;i++){
    my_scanf("%d",&sz[i]);}
    int js[N];
    for(i=0,j=0;i<N;i++){
        if(sz[i]%2!=0){
            js[j]=sz[i];
            j++;}
        }
  for(int k=1;k<=j;k++){	
      int e;	
for(int	m=0;m<j-k;m++){	
	 	 if(js[m]> js[m+1]){	
	 	 	 	 e=js[m+1];	
	 	 	 	 js[m+1]=js[m];	
	 	 	 	js[m]=e;	
	 	 }}}
          for(i=0;i<j-1;i++){
           my_printf("%d,",js[i]);}   
           my_printf("%d",js[j-1]);
    return 0;
    }




#define NUM_ITER 39730

#include <header.h>

int main_bench(){
   int n,i,a[200],b[200];
   int A=0,B=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
      my_scanf("%d%d",&a[i],&b[i]);
	  if(a[i]==b[i]){
	     continue;
	  }
	  if(a[i]==0){
	    if(b[i]==2){B+=1;}
		else{A+=1;}
	  }
      if(a[i]==1){
	    if(b[i]==0){B+=1;}
		else{A+=1;}
	  }
      if(a[i]==2){
	    if(b[i]==1){B+=1;}
		else{A+=1;}
	  }
   }
   if(A>B){
     my_printf("A");
}
   if(A<B){my_printf("B");}
  if(A==B){my_printf("Tie");}
   return 0;
}
#define NUM_ITER 54749

#include <header.h>

int main_bench(){
 int n,k,a[1000],i,j;
 my_scanf("%d%d",&n,&k);
 for(i=0;i<n;i++){
  my_scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
     for(j=i+1;j<n-i;j++){   
         if(a[j]+a[i]!=k){
           continue;
		 }
          if(a[j]+a[i]==k){
             my_printf("yes");
             return 0;
		  }
	 }
 }
 if(i==n){
	 my_printf("no");
 }

 return 0;
}
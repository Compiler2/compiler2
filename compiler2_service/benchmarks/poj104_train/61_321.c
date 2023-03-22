#define NUM_ITER 5810

#include <header.h>

int main_bench(){
	int i,n,len,a[100],s[100],re[100],j;
	 my_scanf("%d",&n);

	 for(i=0;i<n;i++){
	 my_scanf("%d",&a[i]);
	 }
	 
	 for(i=0;i<n;i++){
		 if(a[i]==1||a[i]==2){
		 re[i]=1;
		 }
		 else {
			 s[0]=1;s[1]=1;
		  for(j=2;j<a[i];j++){
		  s[j]=s[j-1]+s[j-2];
		  }
		  re[i]=s[j-1];
		 }
	 }
	 
	 for(i=0;i<n;i++){
	 my_printf("%d\n",re[i]);
	 }
	
	return 0;}
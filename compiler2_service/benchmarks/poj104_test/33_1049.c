#define NUM_ITER 9721

#include <header.h>


int main_bench(){
    int i,n,m;
    char a[1000][256]={'\0'},b[1000][256]={'\0'};
	my_scanf("%d",&n);

	for(i=0;i<n;i++){
	  my_scanf("%s",&a[i]);
	}
	
	   for(i=0;i<n;i++){
	   
            m=strlen(a[i]);
	     for(int k=0;k<m;k++){
		  
		   
		   if(a[i][k]=='A'){
			   b[i][k]='T';
		   }else if(a[i][k]=='T'){
			   b[i][k]='A';
		   }else if(a[i][k]=='C'){
			   b[i][k]='G';
		   }else if(a[i][k]=='G'){
			   b[i][k]='C';
		   }
	
		 } 
       }
	   for(i=0;i<n;i++){
	   my_printf("%s\n",b[i]);
	   }
	   
return 0;



}
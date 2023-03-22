#define NUM_ITER 236368

#include <header.h>

int main_bench(){
  int a[5][5],b[5][5],m,n,i,j;
  for(i=0;i<5;i++){
	  for(j=0;j<5;j++){
	     my_scanf("%d",&a[i][j]);
	  }
  }
  my_scanf("%d%d",&n,&m);
  if(n<5&&m<5&&n>=0&&m>=0){
     for(i=0;i<5;i++){
	
	   for(j=0;j<5;j++){
		   if(i==m)
			   b[i][j]=a[n][j];
		   else if(i==n)
			   b[i][j]=a[m][j];
		   else
			   b[i][j]=a[i][j];
	    
	   }
	  
	 }
	 for(i=0;i<5;i++){
     for(j=0;j<5;j++){
		   if(j==0)
	     my_printf("%d",b[i][j]);
		   else if(j==4)
			   my_printf(" %d\n",b[i][j]);
		   else
			   my_printf(" %d",b[i][j]);
	    }
	 }

  }
  else
	  my_printf("error");
  return 0;
}
	


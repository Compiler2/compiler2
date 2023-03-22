#define NUM_ITER 217407

#include <header.h>

int ab(int n,int m);
int main_bench(){
  int i,j,n,m,a[5][5];
  for(i=0;i<5;i++){
	  for(j=0;j<5;j++){
	    my_scanf("%d",&a[i][j]);
	  }
  }
  my_scanf("%d%d",&n,&m);
  if(ab(n,m)) {
	  for(j=0;j<5;j++){
	     int tmp;
		 tmp=a[n][j];
		 a[n][j]=a[m][j];
		 a[m][j]=tmp;
	  }
      for(i=0;i<5;i++){
	    for(j=0;j<5;j++){
	      my_printf("%d",a[i][j]);
		  if(j<4) my_printf(" ");
		  if(j==4) my_printf("\n");
		}
	  }
  }
  else my_printf("error");
  return 0;
}
int ab(int n,int m){
   if(n<5&&m<5) return 1;
   else return 0;
}
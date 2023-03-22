#define NUM_ITER 57213

#include <header.h>

int main_bench()
{
   int n,i,a,b,c,x,y;
      my_scanf("%d\n",&n);
	  i=1;
      my_scanf("%d\n%d\n",&a,&b);
	  if(a>b){
		  x=a,y=b;
      }else{
		  x=b,y=a;
	  }
	  while(i<=n-2){
	  my_scanf("%d",&c);
	  if(c>x){
          y=x,x=c;
	  }
	  else if(c<x&&c>y){
		  x=x,y=c;
	  }
	  else if(c<y){
		  x=x,y=y;
	  }i++;
	  }

	  my_printf ("%d\n%d",x,y);
	
		
   return 0;
}

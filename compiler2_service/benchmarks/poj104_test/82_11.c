#define NUM_ITER 2070953

#include <header.h>


int main_bench()
{
  int n,k,row,col,x,y,a;
  int sz[100][2];
  my_scanf("%d\n", &n);
  if((n>0)&&(n<100)){
  for(row=0;row<n;row++){
	  for(col=0;col<2;col++){
  my_scanf("%d",&(sz[row][col]));
  }
  }
  k=0;
  a=0;
  for(row=0;row<n;row++){
	  x=sz[row][0];
	  y=sz[row][1];
	  if((x>=90)&&(x<=140)&&(y>=60)&&(y<=90)){
  k++;
  }else if(a<k){
		  a=k;
                    k=0;
  }else if(a>=k){
k=0;
}
  }
if(a<k) a=k;    
my_printf("%d", a);
  }

	return 0;
}

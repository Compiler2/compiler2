#include <header.h>

int main_bench(){
  int n;
  my_scanf("%d",&n);
  int i,x,y;
  double a,b;
  my_scanf("%d%d",&x,&y);
    a=1.0*y/x;
  for(i=2;i<=n;i++){
    my_scanf("%d%d",&x,&y);
	b=1.0*y/x;
	  if((a-b)>0.05){
	    my_printf("worse\n");
	  }
	  else if((b-a)>0.05){
	    my_printf("better\n");
	  }
	  else{
	    my_printf("same\n");
	  }
	}
  return 0;
}
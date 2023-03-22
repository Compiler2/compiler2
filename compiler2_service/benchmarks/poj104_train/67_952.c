#include <header.h>

int main_bench(){
	int n,a,b,j,k;
	int i;
	double c,d,e;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	c=b*1.0/a;
	for(i=0;i<n-1;i++){
	  my_scanf("%d%d",&j,&k);
	  d=k*1.0/j;
	  e=d-c;
	  if(e>0.05){
	    my_printf("better\n");
	  }else if(e<-0.05){
	     my_printf("worse\n");
	  }else if(e>=-0.05&&e<=0.05){
	     my_printf("same\n");
	  } 
	}  
  return 0;
}
#include <header.h>

int main_bench(){
int n,i,t=0;
char xm[300][10];
float tw[300];
double z[300];
double yx[300];
double x[300];

my_scanf("%d",&n);
for(i=0;i<n;i++){
    my_scanf("%lf",&z[i]);
    my_scanf("%lf",&yx[i]);
    x[i]=yx[i]/z[i];
}


for(i=1;i<n-1;i++){
    if(x[0]-x[i]>0.05){
	   
	   my_printf("worse");
	   my_printf("\n");
	}else if(x[i]-x[0]>0.05){
	   
	   my_printf("better");
	   my_printf("\n");
	}else{
	   
	   my_printf("same");
	   my_printf("\n");
	}
 
	
	
}

	   
	  if(x[0]-x[n-1]>0.05){
	   
	   my_printf("worse");

	}else if(x[n-1]-x[0]>0.05){
	   
	   my_printf("better");
	
	}else{
	   
	   my_printf("same");
	 
	}
	 


return 0;
}
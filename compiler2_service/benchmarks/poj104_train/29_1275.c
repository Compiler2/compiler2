#define NUM_ITER 5374

#include <header.h>

int main_bench(){
  int n,m;
  
  int i,j;
  
my_scanf("%d",&n);
for(i=0;i<n;i++){
   my_scanf("%d",&m);
  int a=2,b=1;
  double sum=0;
   for(j=m;j>0;j--){
     sum+=1.0*a/b;
	 a=a+b;
	 b=a-b;
   }
   my_printf("%.3lf\n",sum);
}
 
return 0;

}
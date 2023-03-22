#define NUM_ITER 4302

#include <header.h>

int main_bench(){
int n,a,b=1,c=1,y;
my_scanf("%d",&n);
for(int j=0;j<n;j++){
   my_scanf("%d",&a);
   for(int i=0;i<a;i++){
	   if(i==0||i==1){
	     y=1;
	   }
	   else{
	     y=b+c;
		 c=b;
		 b=y;

	   }
   }
   my_printf("%d\n",y);
   c=1;
   b=1;
}



return 0;
}
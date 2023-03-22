#define NUM_ITER 61588

#include <header.h>

int main_bench(){
	int a,b,c,d,max,second,n;
	my_scanf("%d%d",&n,&b);
	a=1;
	max=b;
	second=0;
	while(a<n){
         my_scanf("%d",&c);
		 if(c>=max){
			d=max;
			max=c;
			second=d;
		 }
		 if((max>c)&&(c>=second)){

			 second=c;
		 }
		 
		 a+=1;
	}
	my_printf("%d\n%d\n",max,second);
	return 0;
}

          
#define NUM_ITER 52238

#include <header.h>

int main_bench()
{
	 int n;
	 my_scanf("%d\n",&n);
     int a,i,sum,som;
     for(i=0;i<n;i++){
         my_scanf("%d\n",&a);
		 if(i==0){
			 sum=a;
			 som=0;
		 }else if(sum<a){
				som=sum;
                                     sum=a;
		 }else if(som<a){
				 sum=sum;
				 som=a;
		 }else if(som>a){
				 sum=sum;
				 som=som;
		 }
	 }
		 my_printf("%d\n%d\n",sum,som);
		 return 0;
}
		 

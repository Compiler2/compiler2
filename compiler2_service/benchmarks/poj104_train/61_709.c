#define NUM_ITER 18197

#include <header.h>


int main_bench()
{
int a[1000],b[1000],i,zhishu,shu;
for(i=0;i<1000;i++){
	 if(i==0){
		 a[0]=1;	 
	 }
	 else{
		 if(i==1){
			 a[i]=1;
		 }
		 else{
			 a[i]=a[i-1]+a[i-2];
		 }
	 }
 }

  my_scanf("%d",&zhishu);
for(i=0;i<zhishu;i++){
my_scanf("%d",&shu);
b[i]=a[shu-1];
}
for(i=0;i<zhishu;i++){
my_printf("%d\n",b[i]);
}
return 0;
}

#define NUM_ITER 15672

#include <header.h>

int main_bench(){
	int n,a1,a2,a3,a4,a5,a6,i,j,s,t=0;
	for(i=0;i<100;i++){
	     my_scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6);
		 
		 s=(a4+12)*3600+a5*60+a6-a1*3600-a2*60-a3;
		 if(a1!=0){
	           my_printf("%d\n",s);
		 }
		 if(a1==0&&2==0){
			 
			 break;
		 }
	}
	
	
	return 0;
}
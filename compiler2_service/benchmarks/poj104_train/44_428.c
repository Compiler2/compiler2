#define NUM_ITER 265940

#include <header.h>

int reverse(int num); 
int main_bench(){
	int i;
	for(i=0;i<6;i++){
					 int n,result;
					 my_scanf("%d",&n);
					 if(n<0){
					 		 my_printf("-");
					 		 n=-n;
							  }
				  reverse(n);
				  	 }
    return 0;
}

int reverse(int num){
	if(num==0){
			   my_printf("0");
			   }
    else{
	int r,x=0,a[1000],weishu;
	for(r=10;1;r=r*10){
					   if(num/r!=0){
					   				x++;
									   }
					   if(num/r==0){
					   				x++;
					   				break;
									   }
					   }
    weishu=x;
    for(r=0;r<weishu;r++){
						  a[r]=num%10;
						  num=num/10;
						  }
    x=1;
	for(r=0;r<weishu;r++){
							 if(a[r]!=0){
							 			 x=0;
										  }
						     if(x==0){
							 		  x=r;
							 		  break;
									   }							 
							 }	
	for(r=x;r<weishu;r++){
					  my_printf("%d",a[r]);
					  }	
	my_printf("\n");	  
						 }
    return 0;
}
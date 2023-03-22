#define NUM_ITER 34105

#include <header.h>

int main_bench(){
        int n,shiyan[999],youxiao[999];
		double xo,x;
		my_scanf("%d",&n);
		for(int i=0;i<n;i++){
		    my_scanf("%d %d",&shiyan[i],&youxiao[i]);
		}
		xo=1.0*youxiao[0]/shiyan[0];
		for(int w=1;w<n;w++){
		   x=1.0*youxiao[w]/shiyan[w];
		   if(xo-x>0.05){
		        my_printf("worse\n");
		   }
		   else if(x-xo>0.05){
		        my_printf("better\n");
		   }
		   else if(x-xo<=0.05&&xo-x<=0.05){
		        my_printf("same\n");
		   }
		}
		return 0;
}

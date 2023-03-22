#define NUM_ITER 3519

#include <header.h>

int main_bench(){
	int i,j,n,x=0,y=0,z=0;
	my_scanf("%d",&n);
	if(n==1||n==2||n==3||n==4){
		my_printf("empty");
	}
	if(n>4){
	    for(i=3;i<=n-2;i++){
			x=0;
		    for(j=i;j>0;j--){
			    if(i%j==0){
				    x+=1;
				}
			}
		if(x==2){
			y=0;
			for(j=i+2;j>0;j--){
				if((i+2)%j==0){
				    y+=1;
				}
			}
		    if(y==2){
				my_printf("%d %d\n",i,i+2);
			}
		
		}
		}
	}
	return 0;
}
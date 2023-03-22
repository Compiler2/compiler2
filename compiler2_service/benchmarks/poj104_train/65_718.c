#define NUM_ITER 37858

#include <header.h>

int main_bench(){
    int a,b,x,y,n,i;
	my_scanf("%d",&n);
    a=0;
	b=0;
	for(i=0;i<n;i++){
	    my_scanf("%d%d",&x,&y);
		if((x-y)*(x-y)==1){
			if(x>y){
                b++;
            }else{
			    a++;
			}
		}
	    if((x-y)*(x-y)==4){
			if(x>y){
                a++;
            }else{
			    b++;
			}
		}
	}
	if(a>b){
	    my_printf("A\n");
	}
    if(a==b){
	    my_printf("Tie\n");
	}
    if(a<b){
	    my_printf("B\n");
	}
	return 0;
}
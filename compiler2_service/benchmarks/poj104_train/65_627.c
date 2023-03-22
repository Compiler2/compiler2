#define NUM_ITER 37746

#include <header.h>

int main_bench(){
    int n,p[2],s=0,q;
	double j;
	my_scanf("%d",&n);
	q=n;
	
	for(int i=0;i<n;i++){
	    my_scanf("%d%d",&p[0],&p[1]);
		if((p[0]==0&&p[1]==1)||(p[0]==1&&p[1]==2)||(p[0]==2&&p[1]==0)){
		   s++;
		}else if(p[0]==p[1]){q--;}
        
	}
	j=(1.0*q)/(2*1.0);
	if(s>j){my_printf("A");}
	else if(s<j){my_printf("B");}
	else{my_printf("Tie");}
	
    return 0;

}
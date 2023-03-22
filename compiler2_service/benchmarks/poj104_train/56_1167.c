#define NUM_ITER 834204

#include <header.h>

int main_bench() 
{
	int n;
    my_scanf("%d",&n);
	int y=0;
	int z=0;
	for(int i=0;i<5;i++){        
        if(n/10!=0){			
			y = n%10;
			z= 10*z+10*y;
		}
		if(n/10==0){
			z +=n;
		}
        n = n/10;
	}
	my_printf("%d",z);
    return 0;
}
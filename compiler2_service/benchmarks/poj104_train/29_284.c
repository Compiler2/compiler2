#define NUM_ITER 4392

#include <header.h>

int main_bench()
{
	int n,c[100],m;
	float t;
	my_scanf("%d",&m);
	for(int i=0;i<m;i++){
		my_scanf("%d",&c[i]);
	}
	for(int i=0;i<m;i++){
	        float s=0,a=2,b=1; 
			for(n=1;n<=c[i];n++){
		        s=s+(float)a/b;
		        t=a;a+=b;b=t;
			}	
		    my_printf("%.3f\n",s);
				
	}
	
	


	return 0;
}

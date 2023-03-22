#define NUM_ITER 68197

#include <header.h>

int main_bench()
{
	int n,i,sum=0;
	my_scanf("%d",&n);
         for(i=0;i<=n;i++){
              sum=sum+i*i;
         }  
	for(i=0;i<=n;i++){
		if(i%7==0)
			sum=sum-i*i;
		    
                      
		else if(i%10==7)
			sum=sum-i*i;
		    
                      
        else if((i-(i%10))==70)
		    sum=sum-i*i;
	}
	my_printf("%d",sum);
	return 0;
}
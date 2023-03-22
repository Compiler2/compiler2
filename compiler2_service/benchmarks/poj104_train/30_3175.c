#define NUM_ITER 71795

#include <header.h>

int main_bench()
{
	int n,x,y,z;
	int sum = 0; 

	my_scanf("%d",&n);
	int i = n;
	while(i>0)
	{
		x = i%7;
	        y = i/10;
		z = i%10;
		
		if (x==0||y==7||z==7){
                            i--;
			continue;
}
		sum = sum + i*i;
		i--;
	}
	my_printf("%d",sum);
    return 0;
}

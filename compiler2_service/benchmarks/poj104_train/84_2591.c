#define NUM_ITER 55674

#include <header.h>

int main_bench()
{
	int i,a[100],b,c,d;
	my_scanf("%d",&d);
		for(i=0;i<d;i++){
			my_scanf("%d",&a[i]);
		}
		b=a[0],c=a[1];
		for(i=1;i<d;i++){
			
			if(a[i]>b){
				c=b;
				b=a[i];
			}
			else{
		if(a[i]>c){
			c=a[i];
			
				}
			}
		}
				
		my_printf("%d\n%d\n",b,c);
	return 0;
}
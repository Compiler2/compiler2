#define NUM_ITER 52046

#include <header.h>

int main_bench()
{
	int a,b,c,i;
	int z[100];
	my_scanf("%d",&a);
	for(i=0;i<a;i++){
		my_scanf("%d",&(z[i]));
	}
	for(i=0;i<a;i++){
		if(i==0){
			b=z[i];
			c=0;
		}
		else{
			if (z[i]>b){
			b=z[i];
			c=0;
			}
		}
	}
	my_printf("%d\n",b);
	for(i=0;i<a;i++){
		if(z[i]<b&&z[i]>c){
			c=z[i];
		}
	}
	my_printf("%d\n",c);
	return 0;
}
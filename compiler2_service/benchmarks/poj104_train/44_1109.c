#define NUM_ITER 425768

#include <header.h>


int main_bench()
{
	int reverse(int num);
	int i,num;
	for(i=0;i<6;i++){
		my_scanf("%d",&num);
		my_printf("%d\n",reverse(num));
	}
}
int reverse(int num)
{
	int a,b,r,j;
	if(num>=0){
		b=num;
		r=0;
		for(j=0;j<32;j++){
			a=b%10;
			b=b/10;
			r=r*10+a;
			if(b==0)
				break;
		}
	}
	else{
		b=-num;
		r=0;
		for(j=0;j<32;j++){
			a=b%10;
			b=b/10;
			r=r*10+a;
			if(b==0)
				break;
		}
		r=-r;
	}
	return r;
}
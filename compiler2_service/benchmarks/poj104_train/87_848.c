#define NUM_ITER 9840

#include <header.h>

int main_bench()
{
    int a,b,c,d,e,f,dh,dm,ds;
	my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
		dh=12-a+d;
		if(b<e){
			dm=60*dh+e-b;
		}
		else{
			dm=60*dh-(b-e);
		}
		if(c<f){
			ds=60*dm+f-c;
		}
		else{
			ds=60*dm-(c-f);
		}
		my_printf("%d\n",ds);
		my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}
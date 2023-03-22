#define NUM_ITER 6782

#include <header.h>

int main_bench()
{   int a1=1,a2=1,i=0,a,n,e,y=0;
    my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&e);
		a1=1;
		a2=1;
		if(e<=2){a=1;}else{
		for(y=0;y<e-2;y++){
			a=a1+a2;
			a1=a2;
			a2=a;
		}}
		my_printf("%d\n",a);
		
	}
	return 0;
}

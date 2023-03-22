#include <header.h>

int main_bench()
{
	int n,a,x,y,i,e,k;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&a);
		if(a==1){
			my_printf("1\n");
		}else if(a==2){
			my_printf("1\n");
		}else{
			x=1,y=1;
			for(k=3;k<=a;k++){
				e=y;
				y=x+y;
				x=e;
			}
			my_printf("%d\n",y);
		}
	}
	return 0;
}
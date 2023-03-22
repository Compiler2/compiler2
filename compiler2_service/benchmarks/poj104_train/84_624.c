#define NUM_ITER 61989

#include <header.h>

int main_bench(){
	int n,a,b,c,m,i=1;
	my_scanf("%d",&n);
	while(i<=n){
		if(i==1){my_scanf("%d",&a);}
		if(i==2){
		my_scanf("%d",&b);
		  if(b>a){m=a;a=b;b=m;}
		}
		if (i!=1&&i!=2){
		my_scanf("%d",&c);
		  if(c>a){b=a;a=c;}
		  if(c<a&&c>b){b=c;}
		}
	i++;
	
	
	}
my_printf("%d\n%d\n",a,b);

return 0;
}
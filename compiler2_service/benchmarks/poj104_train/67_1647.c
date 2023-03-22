#include <header.h>

int main_bench(){
int n,s,i;
my_scanf("%d",&n);
int a[n],b[n];
double c[n];
for(i=0;i<n;i++){
	my_scanf("%d%d",&a[i],&b[i]);
	c[i]=1.0*b[i]/a[i];
}
for(i=1;i<n;i++){
	if(c[i]-c[0]>0.05){
		my_printf("better");
		my_printf("\n");
	}else if(c[0]-c[i]>0.05){
my_printf("worse");
		my_printf("\n");
	}else{
my_printf("same");
		my_printf("\n");
	}
}
return 0;
}
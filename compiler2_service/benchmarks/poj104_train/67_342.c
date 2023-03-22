#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i;
	float x,y;
	int a[100],b[100];
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);}
	x=(float)b[0]/(float)a[0];
	for(i=1;i<n;i++){
		y=(float)b[i]/(float)a[i];
		if(y-x>0.05){
			my_printf("better\n");
			y=0;}
		else if(x-y>0.05){
			my_printf("worse\n");
			y=0;}
		else{
			my_printf("same\n");}}
	return 0;
}


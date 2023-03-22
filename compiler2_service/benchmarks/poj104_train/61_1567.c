#include <header.h>

int s(int n);
int main_bench()
{
	int n[1000],k,j;
	my_scanf("%d",&k);
	for(j=0;j<k;j++){
		my_scanf("%d",&n[j]);
	}
	for(j=0;j<k;j++){
		my_printf("%d\n",s(n[j]));
	}
	return 0;
}
int s(int n){
	int x,y,z,i;
	my_scanf("d",&n);
	x=1;
	y=1;
	z=x+y;
	for(i=3;i<n;i++){
		x=y;
		y=z;
		z=x+y;
	}
	if(n<3){
		z=1;
	}
	return z;
}

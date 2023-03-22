#include <header.h>

int main_bench(){
int n,i;
my_scanf("%d",&n);
int a[100],b[100];
for(i=0;i<n;i++)
my_scanf("%d %d",&a[i],&b[i]);
double w,y[100];
w=(double)b[0]/a[0];
for(i=1;i<n;i++){
	y[i]=(double) b[i]/a[i];
	if(y[i]-w>0.05)
		my_printf("better\n");
	else if(w-y[i]>0.05)
		my_printf("worse\n");
	else
		my_printf("same\n");


}


return 0;
}
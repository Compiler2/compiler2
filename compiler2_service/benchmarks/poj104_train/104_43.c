#define NUM_ITER 390032

#include <header.h>

int main_bench()
{ 
	int x[20],y[20],i,h[20],j,s;
	for(i=0;i<20;i++){x[i]=0;y[i]=0;h[i]=0;}
    int a,b;
	my_scanf("%d %d",&a,&b);
	x[1]=a;y[1]=b;
	for(i=2;x[i-1]>1;i++)
		x[i]=x[i-1]/2;
	for(i=2;y[i-1]>1;i++)
		y[i]=y[i-1]/2;
	for(j=1;y[j]!=0;j++)
	for(i=1;x[i]!=0;i++)
		if(x[i]==y[j])h[i]=x[i];
	for(i=1;;i++)
		if(h[i]!=0){s=h[i];break;}
	my_printf("%d",s);
	return 0;
}
#define NUM_ITER 52233

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int i,a=0,b=0,c=0,d=0;
	double x,y,z,q,m,l,e,f;
	int sz[100];
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		if(sz[i]>=1&&sz[i]<=18){
			a+=1;}
		if(sz[i]>=19&&sz[i]<=35){
			b+=1;}
		if(sz[i]>=36&&sz[i]<=60){
			c+=1;}
		if(sz[i]>60){
			d+=1;}
	}
	x=(double)a/n;
	m=x*100;
	y=(double)b/n;
	l=y*100;
	z=(double)c/n;
	e=z*100;
	q=(double)d/n;
	f=q*100;
	my_printf("1-18: %.2lf%%\n",m);
    my_printf("19-35: %.2lf%%\n",l);
	my_printf("36-60: %.2lf%%\n",e);
	my_printf("60??: %.2lf%%\n",f);
	return 0;
}

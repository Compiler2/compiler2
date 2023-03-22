#define NUM_ITER 1670

#include <header.h>

int main_bench()
{
	struct a{
		int x,y;
	}
	a[5000];
	int n,i,c,d,j,h,x,y,r[5000],t[5000];
	double f;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&x,&y);
		a[i].x=x;
		a[i].y=y;
	
	r[i]=a[i].x;
	t[i]=a[i].y;}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[j].x<a[i].x){
				c=a[i].x;
				a[i].x=a[j].x;
				a[j].x=c;
			}
			if(a[j].y>a[i].y){
				d=a[i].y;
				a[i].y=a[j].y;
				a[j].y=d;
			}
		}
	}
	for(i=a[0].x;i<a[0].y;i++){
	f=i*1.0+0.1;h=0;
		for(j=0;j<n;j++){
			if(f<r[j]||f>t[j]){
              h++;
			 }
		}
		if(h==n){
			
			my_printf("no");
			return 0;
		}
		
	}
	if(i==a[0].y){
		my_printf("%d %d",a[0].x,a[0].y);
	}
	
	return 0;
	

}
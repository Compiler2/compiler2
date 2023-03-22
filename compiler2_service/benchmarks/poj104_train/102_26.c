#include <header.h>

int main_bench(){
	int i,n,j=0,l=0,k;
	float h,x[100],y[100],e;
	char a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		my_scanf("%f",&h);
		if(a[0]=='m'){
			x[j]=h;
			j++;}
		else{
			y[l]=h;
			l++;
		}
	}
	for(k=1;k<j;k++){
		for(i=0;i<j-k;i++){
			if(x[i]>x[i+1]){
				e=x[i+1];
				x[i+1]=x[i];
				x[i]=e;
			}
		}
	}
	for(k=1;k<l;k++){
		for(i=0;i<l-k;i++){
			if(y[i]>y[i+1]){
				e=y[i+1];
				y[i+1]=y[i];
				y[i]=e;
			}
		}
	}
	my_printf("%.2f",x[0]);
	for(i=1;i<j;i++){
		my_printf(" %.2f",x[i]);
	}
	for(i=l-1;i>=0;i--){
		my_printf(" %.2f",y[i]);
	}
	return 0;
}

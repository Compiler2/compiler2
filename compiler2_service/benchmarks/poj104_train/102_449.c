#include <header.h>

int main_bench(){
int n,i,k,t,l;
double h,e;
double a[100],b[100];
char sex[10];
k=0,t=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%s %lf",&sex,&h);
	if(strcmp(sex,"female")==0){
		a[t]=h;
		t++;
	}else{
		b[k]=h;
		k++;
	}
}
for(i=0;i<t;i++){
	for(l=i+1;l<t;l++){
		if(a[l]>a[i]){
			e=a[i];
			a[i]=a[l];
			a[l]=e;
		}
	}
}
for(i=0;i<k;i++){
	for(l=i+1;l<k;l++){
		if(b[l]<b[i]){
			e=b[i];
			b[i]=b[l];
			b[l]=e;
		}
	}
}
for(i=0;i<k;i++){
	my_printf("%.2lf ",b[i]);
}
for(i=0;i<t-1;i++){
	my_printf("%.2lf ",a[i]);
}
my_printf("%.2lf\n",a[t-1]);
return 0;
}
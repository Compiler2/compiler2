#define NUM_ITER 4856

#include <header.h>

int main_bench(){
int n,i,k,h,e,d,g;
h=1;
int a[100],b[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
}
for(k=1;k<n;k++){
	for(i=0;i<n-k;i++){
		if(a[i]>a[i+1]){
		e=a[i];
		a[i]=a[i+1];
		a[i+1]=e;
		d=b[i];
		b[i]=b[i+1];
		b[i+1]=d;
		}
	}
}
h=1;
for(i=0;i<n-1;i++){
	if(b[i]<a[i+1]){
	h=0;
	break;
	}else if((b[i]>b[i+1])&&(i!=n-1)){
	g=b[i];
	b[i]=b[i+1];
	b[i+1]=g;
	}
}
if(h==0){
my_printf("no");
}else{
my_printf("%d %d",a[0],b[n-1]);
}
return 0;
}
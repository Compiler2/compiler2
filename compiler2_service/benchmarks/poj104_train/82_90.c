#include <header.h>

int main_bench(){
	int n,i,a[100],d,k=0,b[100],c[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90)){
			c[k]++;
		}
		else{
			k++;
		}
	}
	if((a[n-1]>=90)&&(a[n-1]<=140)&&(b[n-1]>=60)&&(b[n-1]<=90)){
		k++;
	}
	for(i=0;i<k-1;i++){
		if(c[i]>c[i+1]){
			d=c[i+1];
			c[i+1]=c[i];
			c[i]=d;
		}
	}
	my_printf("%d",c[k-1]);
	return 0;
}
#include <header.h>

int main_bench(){
	int n,i,t,p,q,j;
	double a[40],c[40],d[40],e;
	char b[40][6];
	p=0;
	q=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s %lf",b[i],&a[i]);
		t=strcmp(b[i],"female");
		if(t==0){
			d[q]=a[i];
			q++;
		}
		else{
			c[p]=a[i];
			p++;
		}
	}
	for(i=0;i<p;i++){
		for(j=0;j<p-1-i;j++){
			if(c[j]>c[j+1]){
				e=c[j+1];
				c[j+1]=c[j];
				c[j]=e;
			}
		}
	}
	for(i=0;i<q;i++){
		for(j=0;j<q-1;j++){
			if(d[j]<d[j+1]){
				e=d[j];
				d[j]=d[j+1];
				d[j+1]=e;
			}
		}
	}
	for(i=0;i<p;i++){
		my_printf("%.2lf ",c[i]);
	}
	for(i=0;i<q-1;i++){
		my_printf("%.2lf ",d[i]);
	}
	my_printf("%.2lf",d[q-1]);
	return 0;
}
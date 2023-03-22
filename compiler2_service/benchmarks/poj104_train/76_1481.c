#define NUM_ITER 1610

#include <header.h>

int main_bench(){
	int n,i,k,e,f,m,x=0,a[50000],b[50000],c[50000],d[50000];
	double g;
		my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		c[i]=a[i];
		d[i]=b[i];
	}
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(c[i]>c[i+1]){
			    e=c[i+1];
				c[i+1]=c[i];
				c[i]=e;
			}
			if(d[i]>d[i+1]){
                f=d[i+1];
				d[i+1]=d[i];
				d[i]=f;
			}
		}
	}
	for(g=c[0];g<=d[n-1];g=g+1.0/2){
		m=0;
		for(i=0;i<n;i++){
			if(g>=a[i]&&g<=b[i]){
				m++;
			}
		}
		if(m!=0){
			x++;
		}
	}
	if(x!=2*(d[n-1]-c[0])+1){
			my_printf("no");
	}else{
	        my_printf("%d %d",c[0],d[n-1]);
	}
	return 0;
}

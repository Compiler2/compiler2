#define NUM_ITER 3069

#include <header.h>

int main_bench(){
	int a[5000],n,i,t,m,c,I=0,k;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(t=i-1;t>0;t--){
		for(c=0;c<t;c++){
		if(a[c]>a[c+1]){
			m=a[c];
			a[c]=a[c+1];
			a[c+1]=m;
		}
		}
	}
	m=0;
	for(I=0;I<n-1;I++){
		for(t=I+1;t<n;t++){
			if(a[I]+a[t]==k){
				m=1;
				break;
			}
		}
	}
	if(m==1) my_printf("yes");
	if(m==0) my_printf("no");
	return 0;
}
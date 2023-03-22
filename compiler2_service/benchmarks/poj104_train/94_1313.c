#define NUM_ITER 5727

#include <header.h>

int main_bench(){
	int n,i,a[100],b[100],j,t;
	char c=',';
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		b[i]=0;
		my_scanf("%d",&a[i]);
		if (a[i]%2!=0)
			b[i]=a[i];
		continue;
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (b[i]>b[j]){
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for (i=0;i<n-1;i++){
		if (b[i]!=0)
			my_printf("%d%c",b[i],c);
		else continue;
	}
	my_printf("%d",b[n-1]);
	return 0;
}

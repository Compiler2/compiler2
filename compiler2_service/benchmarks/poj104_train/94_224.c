#define NUM_ITER 23562

#include <header.h>



int main_bench()
{
	int n,i,k,m,c;
	my_scanf("%d",&n);
	int a[500],b[500];
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	int j=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0&&a[i]!=0){
			b[j]=a[i];
			j++;
		}
	}
	for(k=1;k<=j;k++){
		m=0;
		for(i=0;i<=j-k;i++){
			if(b[i]>b[m]){
				m=i;
			}
		}
		if(m!=j-k){
			c=b[m];
			b[m]=b[j-k];
			b[j-k]=c;
		}
	}
    for(k=0;k<j-1;k++){
	   my_printf("%d,",b[k]);
    }
	my_printf("%d",b[j-1]);
	return 0;
}


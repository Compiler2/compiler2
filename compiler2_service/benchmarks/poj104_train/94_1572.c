#define NUM_ITER 2244

#include <header.h>

int main_bench(){
	int m,n,i,j,k,q;
	int a[10000],b[10000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	j=0;k=0;
	my_scanf("%d",&k);
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			b[j]=a[i];
			k++;
			j++;
		}
	}
			
	
	for(i=0;i<k;i++){
for(j=0;j<k-1;j++){
			if(b[j]>b[j+1]){
				q=b[j];
				b[j]=b[j+1];
				b[j+1]=q;
			}
		}
	}
	for(i=0;i<k-1;i++){
		my_printf("%d",b[i]);
		my_printf(",");
	}
my_printf("%d\n",b[k-1]);
return 0;
}
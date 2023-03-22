#define NUM_ITER 50709

#include <header.h>

int main_bench() {
	int n,k,i,j,a[1000],b[1000],f=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=k-a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(a[i]==b[j]&&i!=j&&f==0){
			f=1;
			break;
		}
		}
		if(f==1)
		break;
	}
	if(f==1)
	my_printf("yes");
	else my_printf("no");
	return 0;
}
	
	
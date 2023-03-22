#define NUM_ITER 67777

#include <header.h>

int main_bench(){
	int i,j,n,m,a[1009],b;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	int isbreak=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]!=a[j])
			b=a[i]+a[j];
			if(b==m){
				my_printf("yes");
				isbreak=1;
				break;
			}
		}
		if(isbreak==1)
		break;
	}
	if(isbreak==0)
	my_printf("no");
	return 0;
}
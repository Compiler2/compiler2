#include <header.h>

int main_bench(){
	int a[1000];
	int b,i,n,k,j,s;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s=a[i];
		for(j=i+1;j<n;j++){
			s=a[i]+a[j];
			if(s==k){
				b=1;
			}
			else
				continue;
		}
	}
	if(b==1)
		my_printf("yes");
        else
		my_printf("no");
	return 0;
}

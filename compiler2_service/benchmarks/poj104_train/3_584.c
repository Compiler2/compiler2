#include <header.h>

int main_bench()
{
	int n,m,i,j,t=0,a[1000];
	my_scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++){
		my_scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
			if(a[i]+a[i+j]==m){
				t++;
			}
		}
	}
	if(t==0){
		my_printf("no");
	}
	else if(t!=0){
		my_printf("yes");
	}
	return 0;
}


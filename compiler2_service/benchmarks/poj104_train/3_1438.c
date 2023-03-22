#include <header.h>

int main_bench(){
	int n,k,i;
	int a[1000];
	int b[1000];
	my_scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		my_scanf("%d",&(a[i]));
	}
    for(i=1;i<=n;i++){
		b[i]=k-a[i];
	}
	for(int m=1;m<=n;m++){
		for(i=1;i<=n;i++){
			if(a[m]==b[i]){
				my_printf("yes");
                return 0;
			}
		}
	}
		my_printf("no");
		return 0;
}
		

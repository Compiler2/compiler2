#include <header.h>


int main_bench()
{
int n,i;
my_scanf("%d",&n);
int sz[100];
for(i=1;i<=n;i++){
	if(i<n){
		my_scanf("%d ",&sz[i]);
	}else{
		my_scanf("%d",&sz[i]);
	}
}
for(i=n;i>=1;i--){
    if(i>1){
		my_printf("%d ",sz[i]);
	}else{
		my_printf("%d",sz[i]);
	}
}

   return 0;
}


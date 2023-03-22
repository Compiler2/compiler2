#include <header.h>

int main_bench(){
	int sz[1100];
	int n,k,i,j,x;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j)x=sz[i]+sz[j];
			 if (x==k) break;
		}
		if(x==k)break;
	}
	
	   if(x==k) my_printf("yes\n");
	
	if(x!=k)
		my_printf("no\n");
	return 0;

}
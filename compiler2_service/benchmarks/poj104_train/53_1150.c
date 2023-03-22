#include <header.h>

int main_bench(){
	int sz[300],n,i,j,q[300],m=0,p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		for(j=0;j<=i;j++){
			if(j==i){
					q[m]=sz[i];
					m++;
			}
			if(sz[i]==sz[j]){
				break;
			}
		}
	}
	for(p=0;p<(m-1);p++){
		my_printf("%d,",q[p]);
	}
	my_printf("%d",q[m-1]);
	return 0;
}
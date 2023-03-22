#define NUM_ITER 18044

#include <header.h>

int main_bench()
{
 	int n,i,j,m=0,num=0;
 	int sz[10000];
 	my_scanf("%d",&n);
 	for(i=2;i<=n;i++){
			for(j=2;j<=i;j++){
				if(i%j==0) break;
				}
			if(j==i){
				sz[m]=i;
				m++;
				}
			}
	if(m<2) my_printf("empty");
	else{
		for(i=1;i<m;i++){
		if(sz[i]-sz[i-1]==2){
			my_printf("%d %d\n",sz[i-1],sz[i]);
			num++;
			}
		}
	if(num==0) my_printf("empty");
	}
	
 	
    return 0;
}
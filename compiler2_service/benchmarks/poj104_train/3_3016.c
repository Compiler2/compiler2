#include <header.h>

int main_bench()
{
	int n,k,i,m,p;
	int sz[1000];
	my_scanf("%d%d\n",&n,&k);
	p=0;
	sz[n]=k;
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	
	for(i=0;i<n;i++){
		for(m=n-1;m>i;m--){
			if(sz[i]+sz[m]==sz[n]){
			p=1;
			}
		}
	}
	if(p==1)
		my_printf("yes");
	if(p==0)
		my_printf("no");
	return 0;
}
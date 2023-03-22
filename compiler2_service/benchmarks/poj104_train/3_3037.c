#include <header.h>

int main_bench(){
	int n,k,sz[1000],i,m,sc[500500],l;
	my_scanf("%d %d",&n,&k);
	l=0;
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);}
	for(i=0;i<n;i++){
		for(m=1;m<n-i;m++){
			sc[l]=sz[i]+sz[m];
			l=l+1;};}
	for(i=0;i<l;i++){
		if(k==sc[i]){my_printf("yes");
		return 0;}}
	my_printf("no");
	return 0;
}
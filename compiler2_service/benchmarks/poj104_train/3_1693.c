#define NUM_ITER 9585

#include <header.h>

int main_bench(){
	int n,k,i,a,m=0,s1[1000],s2[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&s1[i]);
		s2[i]=s1[i];
	}
	for(i=0;i<(n-1);i++){
		for(a=(i+1);a<n;a++){
			if(s1[i]+s2[a]==k){
				m++;
			}
		}
	}
	if(m>0) my_printf("yes");
	else my_printf("no");
	return 0;
}
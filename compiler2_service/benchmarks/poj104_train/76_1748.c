#define NUM_ITER 11385

#include <header.h>

int main_bench(){
	int n, i, p, q, j, a[10000]={0}, l=1, s=50000, m=1;
	my_scanf("%d", &n);
	for(i=1;i<=n;i++){
		my_scanf("%d %d", &p, &q);
		for(j=p;j<q;j++){
			a[j]=1;
			if(p<s){
				s=p;
			}
			if(q>l){
				l=q;
			}
		}
	}
	a[s]=1;
	a[l]=1;
	for(i=s;i<=l;i++){
		if(a[i]==0){
			m=0;
			my_printf("no");
			break ;
		}
	}
	if(m==1){
		my_printf("%d %d", s, l);
	}
	return 0;
}
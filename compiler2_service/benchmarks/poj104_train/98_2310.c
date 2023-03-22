#define NUM_ITER 32151

#include <header.h>


main_bench(){
	struct word{
		char a[41];
		int l;
	};
	struct word w[10000];
	int n, i, sum;
	my_scanf("%d", &n);
	for(i=0; i<n; i++){
		my_scanf("%s", w[i].a);
		w[i].l=strlen(w[i].a);
	}
	for(i=n; i==n; i++) w[i].l=0;
	sum=0;
	for(i=0; i<n; i++){
		sum+=w[i].l+1;
		if(sum+w[i+1].l<81){
			if(i==n-1) my_printf("%s", w[i].a);
			else  my_printf("%s ", w[i].a);
		}
		else{
			if(i==n-1) my_printf("%s", w[i].a);
			else {
				my_printf("%s\n", w[i].a);
				sum=0;
			}
		}
	}
}

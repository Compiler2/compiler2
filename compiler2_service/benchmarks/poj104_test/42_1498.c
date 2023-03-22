#include <header.h>

int main_bench() {
	int n;
	int a[100001];
	int i, j, k;
	int g;
	my_scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		my_scanf("%d", &a[i]);
	}
	my_scanf("%d", &k);
	
	g = 0;
	for(i=0; i<n; i++) {
		if(a[i] == k) continue;
		
			if(g == 1) {
				my_printf(" %d", a[i]);
			} else {
				my_printf("%d", a[i]);
				g = 1;
			}
		
	}
	return 0;
}

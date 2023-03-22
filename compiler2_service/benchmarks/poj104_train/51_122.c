#define NUM_ITER 762364

#include <header.h>

int main_bench() {
	char s[600];
	int len;
	int i;
	int j;
	int n;
	int k;
	int max;
	int idx[1000];
	int count[1000] = {0};
	my_scanf("%d", &n);
	my_scanf("%s", s);
	len = strlen(s);
	k=0;
	for(i=0; i<=len-n; i++) {
		for(j=0; j<k; j++) {
			if(strncmp(s+i, s+idx[j], n) == 0) {
				count[j]++;
				break;
			}
		}
		if(j == k) {
			idx[k] = i;
			count[k] = 1;
			k++;
			count[k] = 0;
		}
	}
	max = -1;
	for(i=0; i<k; i++) {
		if(count[i] > max) {
			max = count[i];
		}
	}
	if(max <= 1) {
		my_printf("NO\n");
		return 0;
	}
	my_printf("%d\n", max);
	for(i=0; i<k; i++) {
		if(count[i] == max) {
			for(j=idx[i]; j<idx[i]+n; j++) {
				my_printf("%c", s[j]);
			}
			my_printf("\n");
			
		}
	}
	return 0;
}

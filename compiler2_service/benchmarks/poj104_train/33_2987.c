#define NUM_ITER 24338

#include <header.h>

int main_bench(){
	int n;
	char a[1000];
	my_scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		my_scanf("%s",a);
		int len = strlen(a);
		for (int j = 0;j < len; j++){
			char ans;
			switch (a[j]) {
				case 'A': ans = 'T';break;
				case 'T': ans = 'A';break;
				case 'G': ans = 'C';break;
				case 'C': ans = 'G';break;
			}
			my_printf("%c", ans );
		}
		my_printf("\n");
	}
	

}
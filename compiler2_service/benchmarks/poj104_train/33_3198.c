#include <header.h>

int main_bench() {
	int n;
	int len, i;
	char s[300];
	my_scanf("%d", &n);
	while(n--) {
		my_scanf("%s", s);
		len = strlen(s);
		for(i=0; i<len; i++) 
			switch(s[i]) {
				case 'A': my_printf("T");break;
				case 'T': my_printf("A");break;
				case 'G': my_printf("C");break;
				case 'C': my_printf("G");break;
			}
		my_printf("\n");
	}
				
	return 0;
}
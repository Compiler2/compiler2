#define NUM_ITER 28542

#include <header.h>



const int maxlen=80;

char st[50];

int n, len, newline, nowlen;

int main_bench(){

	
	my_scanf("%d", &n);
	newline = 1;
	for (int i=0; i<n; i++){
		my_scanf("%s", st);
		nowlen = strlen(st);
		if ((i?1:0)+nowlen+len > maxlen){
			my_printf("\n%s", st);
			len = nowlen;
		}
		else {
			if (i) putchar(' ');
			my_printf("%s", st);
			len += (i?1:0) + nowlen;
		}
	}

	return 0;
}

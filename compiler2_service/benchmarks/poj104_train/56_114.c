#define NUM_ITER 1101626

#include <header.h>

int main_bench() {
	int n;
	my_scanf ("%d", &n);
    int i,j;
	int q;
    int s[5];
	for (i=0; i<5; i++) {
		q=n%10;
		n=n/10;
		s[i]=q;
	}
	for (j=0; j<5; j++) {
		if (s[j] != 0) {
	        my_printf ("%d", s[j]);
		}
	}
	return 0;
}
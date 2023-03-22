#include <header.h>

int strcmp(char *a, char *b, int n) {
	int i=0;
	for (i=0; i<n; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}
int main_bench() {
	char a[501], b[501];
	int n, i, j, k, x, y, l, f;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	my_scanf("%d", &n);
	my_scanf("%s", a);
	l = strlen(a)+1;
	f = 0;
	for (i=0; i+n<l; i++) {
		for (j=i+1; j+n<l; j++) {
			if (strcmp(&a[i], &a[j], n) == 1)
				b[i] ++;
		}
		if (b[i] > f)
			f = b[i];
	}
	if (f == 0)
		my_printf("NO");
	else {
		my_printf("%d\n", f+1);
		for (i=0; i<l; i++)
			if (b[i] == f) {
				for (j=0; j<n; j++)
					my_printf("%c", a[i+j]);
				my_printf("\n");
			}
	}
	
	return 0;
}

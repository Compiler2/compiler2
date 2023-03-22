#include <header.h>


int a[200][200] = {0};
int b[200][200] = {0};
int main_bench() {
	int n, m;
	char tmp;
	my_scanf("%d", &n);
	getchar();
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			my_scanf("%c", &a[i][j]);
			if (a[i][j] == '@')
				b[i][j] = 1;

		}
		getchar();
	}
	my_scanf("%d", &m);
	for (int k = 1; k < m; k++) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (a[i][j] == '@' && b[i][j] == k) {
					if (a[i+1][j] == '.') {
						a[i+1][j] = '@';
						b[i+1][j] = k+1;
					}
					if (a[i-1][j] == '.') {
						a[i-1][j] = '@';
						b[i-1][j] = k+1;
					}
					if (a[i][j+1] == '.') {
						a[i][j+1] = '@';
						b[i][j+1] = k+1;
					}
					if (a[i][j-1] == '.') {
						a[i][j-1] = '@';
						b[i][j-1] = k+1;
					}
				}
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j)
			if (a[i][j] == '@')
				cnt++;
	}
	my_printf("%d", cnt);
}
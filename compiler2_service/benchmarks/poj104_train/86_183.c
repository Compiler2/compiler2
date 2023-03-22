#include <header.h>


int main_bench()
{
	int n, brea[100], num[100][100] ,mark[100], i, j;
	my_scanf("%d", &n);
	for (i=1;i<=n;i++){
		my_scanf("%d", &brea[i]);
		mark[i] = 60;
		for (j=1;j<=brea[i];j++){
			my_scanf("%d", &num[i][j]);
			if (num[i][j]+j*3 < 60) mark[i] = 60-j*3;
			if (num[i][j]+j*3 == 61) mark[i] = 61-j*3;
			if (num[i][j]+j*3 == 62) mark[i] = 62-j*3;
		}
	}
	for (i=1;i<=n;i++){
		my_printf("%d\n", mark[i]);
	}
	return 0;
}

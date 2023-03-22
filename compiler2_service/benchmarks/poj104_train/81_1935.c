#include <header.h>

int main_bench()
{
	int MtxSwap(int [][5], int, int);
	int mtx[5][5], i, j;
	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			my_scanf("%d", &mtx[i][j]);
	int m, n;
	my_scanf("%d%d", &m, &n);
	if(MtxSwap(mtx,m,n))
		for(i=0; i<5; i++)
		{
			for(j=0; j<4; j++)
				my_printf("%d ", mtx[i][j]);
			my_printf("%d\n", mtx[i][j]);
		}
	else my_printf("error\n");
	return 0;
}
int MtxSwap(int mtx[][5], int m, int n)
{
	if(m<0 || m>4 || n<0 || n>4)
		return 0;
	int tmp[5];
	memcpy(tmp, mtx[m], sizeof(tmp));
	memcpy(mtx[m], mtx[n], sizeof(tmp));
	memcpy(mtx[n], tmp, sizeof(tmp));
	return 1;
}

#include <header.h>


int check(int (*arr)[5], int n, int m)
{
	int i,t;
	if (n<0||n>=5||m<0||m>=5) return 0;
	for (i=0; i<5; ++i) 
	{
		t=arr[n][i]; arr[n][i]=arr[m][i]; arr[m][i]=t;
	}
	return 1;
}

int main_bench() {
	int arr[5][5];
         int check(int (*arr)[5], int n, int m);
         int i,j;
	int n,m;
	for (i=0; i<5; ++i) for (j=0; j<5; ++j) my_scanf("%d", &arr[i][j]);
	my_scanf("%d %d", &n, &m);
	if (check(arr, n, m)==0) 
	{
		my_printf("error\n");
		return;
	}
	for (i=0; i<5; ++i) 
	{
		for (j=0; j<4; ++j) my_printf("%d ", arr[i][j]);
		my_printf("%d\n", arr[i][4]);
	}
	my_scanf("%d", &i);
}
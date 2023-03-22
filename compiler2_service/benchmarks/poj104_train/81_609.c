#include <header.h>


int FindAndExchange(int Matrix[5][5], int n, int m)
{
int i;
int *num_n;
int *num_m;
if (!(n>=0&&n<=4 && m>=0&&m<=4))
return 0;
num_n = &Matrix[n][0];
num_m = &Matrix[m][0];
for (i=0; i<5; i++){
*num_n ^= *num_m;
*num_m ^= *num_n;
*num_n ^= *num_m;
num_n++;
num_m++;
}
return 1;
}
int main_bench()
{
int Matrix[5][5];
int i, j;
int n, m;
for (i=0; i<5; i++){
for (j=0; j<5; j++){
my_scanf("%d", &Matrix[i][j]);
}
}
my_scanf("%d %d", &n, &m);
if (FindAndExchange(Matrix, n, m)) {
for (i=0; i<5; i++){
if (i>0) my_printf("\n");
for (j=0; j<5; j++){
if (j>0) my_printf(" ");
my_printf("%d", Matrix[i][j]);
}
}
} else
my_printf("error");
return 0;
}
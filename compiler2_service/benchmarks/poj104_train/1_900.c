#include <header.h>


int count;

void f(int n, int min) {
int i;
if (n == min) { count++; return;}
if (n % min!=0) { return;}
for (i = min; i <= n; i++)
f(n/min, i);
}


int main_bench() {
int N,i,num,j;
my_scanf("%d",&num);
for(j=1;j<=num;j++){
count = 0;
my_scanf("%d",&N);
for (i = 2; i <= N;i++)
f(N, i);
my_printf("%d\n",count);
}
return 0;
}

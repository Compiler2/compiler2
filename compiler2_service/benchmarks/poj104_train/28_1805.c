#define NUM_ITER 161063

#include <header.h>

int main_bench()
{char a[300][20];
int n,i;
my_scanf("%s",a[0]);
n=strlen(a[0]);
my_printf("%d",n);
for(i=1;i<300;i++){
my_scanf("%s",a[i]);
n=strlen(a[i]);
if(n==0)break;
else
my_printf(",%d",n);}



	return 0;
}


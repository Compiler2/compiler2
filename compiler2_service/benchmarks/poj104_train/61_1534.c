#define NUM_ITER 6580

#include <header.h>

int feibo(int n);
int main_bench()
{
int i,n,c,result[1000];
my_scanf("%d",&c);
for(i=1;i<=c;i++){
	my_scanf("%d",&n);
	result[i]=feibo(n);
}
for(i=1;i<=c;i++){
	my_printf("%d\n",result[i]);
}
return 0;
}


int feibo(int n)
{
int a=0;
int b=0;
int result=1;
int i;
for(i=1;i<=n-1;i++){
	a=result;
	result=result+b;
	b=a;
}
return result;
}
#define NUM_ITER 275350

#include <header.h>

int main_bench()
{ int sum(int n,int k);
int n,k,s;
my_scanf("%d %d",&n,&k);
s=sum(n,k);
my_printf("%d",s);
return 0;
}
int sum(int n,int k){
	int s,i;
s=n;
for(i=1;i<n-1;i++)
s=s*n;
s=s-k;
s=s*n+k;
return s;
}
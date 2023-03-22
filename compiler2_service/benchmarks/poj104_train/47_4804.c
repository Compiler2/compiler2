#define NUM_ITER 51493

#include <header.h>

int main_bench(){
    int n;    
	my_scanf("%d",&n);    
	int N[100],i,e;    
	for (i = 0;i < n;my_scanf("%d",&N[i++]));    
	for (i=0; i<n/2; e = N[i], N[i]=N[n-i-1], N[n-i-1]=e, i++);    
	for (i = 0;i < n-1;my_printf("%d ",N[i++]));
my_printf("%d",N[n-1]);
return 0;
}
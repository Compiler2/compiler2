#define NUM_ITER 51318

#include <header.h>

int main_bench()
{ 
	int n, m;
	my_scanf("%d%d", &n,&m); 
	int*num=(int*)malloc(sizeof(int)*(n+m)); 
	for(int i=m;i<m+n;i++) {  
		my_scanf("%d", &num[i]); } 
	for(int i=n;i<m+n;i++) {  
		num[i-n]=num[i]; } 
	my_printf("%d", num[0]);
	for(int i=1;i<n;i++) { 
		my_printf(" %d", num[i]); } 
	free(num); 
	return 0;
}

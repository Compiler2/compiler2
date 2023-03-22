#define NUM_ITER 11578

#include <header.h>

int main_bench()
{int i,n,k,a[1000],j=0,m;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
	my_scanf("%d",&a[i]);}
	m=n;	
	for(j=0;j<m;j++){
	for(n;n>0;n--){
	for(i=0;i<n;i++){
    if(a[j]+a[i]==k){my_printf("yes");return 0;}
	}
	}n=m-j-1;
}my_printf("no");return 0;}
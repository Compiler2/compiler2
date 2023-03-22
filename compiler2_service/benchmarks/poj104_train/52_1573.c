#define NUM_ITER 57554

#include <header.h>

int main_bench(){
	int *p,*q,m,n,i;
	my_scanf("%d %d",&n,&m);
	int dk[100];
	for(i=0;i<n;i++){
		my_scanf("%d",&(dk[i]));
	}
	p=dk;
	q=&dk[n-m];
	for(i=0;i<m;i++){
		my_printf("%d ",*(q));
		q++;
	}
	for(i=0;i<n-m-1;i++){
     my_printf("%d ",*(p));
	 p++;
	}
	my_printf("%d",*(p));
	return 0;
}
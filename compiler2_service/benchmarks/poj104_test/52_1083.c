#include <header.h>


int main_bench(){
	int n,m;
	my_scanf("%d %d", &n, &m);
	int num[100];
	int *p=num;
	int i;
	for(i=0;i<n;i++){
		my_scanf("%d",&num[i]);
	}
	for(i=0;i<m;i++){
		int templast=*(p+n-1);
		int j;
		for(j=n-1;j>=1;j--){
			*(p+j)=*(p+j-1);
		}
		*p=templast;
	}
	my_printf("%d",*p);
	for(i=1;i<n;i++){
		my_printf(" %d",*(p+i));
	}
	my_printf("\n");

	return 0;
}

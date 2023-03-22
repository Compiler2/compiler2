#define NUM_ITER 38108

#include <header.h>

int main_bench(){
	int n;
	int i,j;
	int p,q;
	p=0;
	q=0;
	int a[200],b[200];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&a[i-1],&b[i-1]);
		if(a[i-1]==0&&b[i-1]==1)
			{p++;}
		if(a[i-1]==1&&b[i-1]==2)
			{p++;}
		if(a[i-1]==2&&b[i-1]==0)
			{p++;}
		if(a[i-1]==1&&b[i-1]==0)
			{q++;}
		if(a[i-1]==2&&b[i-1]==1)
			{q++;}
		if(a[i-1]==0&&b[i-1]==2)
			{q++;}
	}
	if(p>q){my_printf("A");}
	if(p<q){my_printf("B");}
	if(p==q){my_printf("Tie");}
	return 0;
}
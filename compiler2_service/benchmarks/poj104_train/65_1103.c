#define NUM_ITER 31695

#include <header.h>

int main_bench()
{
	int n,i;
	int p=0,q=0;
	my_scanf("%d",&n);
	int a[300],b[300];
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==0)||(a[i]==1&&b[i]==1)||(a[i]==2&&b[i]==2)){
			p++;
			q++;
		}
		else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			p++;
		}
		else
			q++;
	}
	if(p>q)
		my_printf("A");
	else if(p<q)
		my_printf("B");
	else
		my_printf("Tie");
	return 0;
}
#define NUM_ITER 33652

#include <header.h>

int main_bench() {
	int n,i,A=0,B=0;
	int a[200];
	int b[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d%d\n",&a[i],&b[i]);
	}
    for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
		A++;
		else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0))
			B++;
	}
	if(A>B)
		my_printf("A");
	else if(A<B)
		my_printf("B");
  else
     my_printf("Tie");
     return 0;
}
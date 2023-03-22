#define NUM_ITER 32640

#include <header.h>

int main_bench() {
	int n,A=0,B=0,a[200],b[200],i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==b[i]){A+=0;B+=0;}
		else if((a[i]==0 && b[i]==1) || (a[i]==1 && b[i]==2) || (a[i]==2 && b[i]==0)){A+=1;}
		else if((a[i]==0 && b[i]==2) || (a[i]==1 && b[i]==0) || (a[i]==2 && b[i]==1)){B+=1;}
	}

	if(A>B){my_printf("A");}
	else if(A<B){my_printf("B");}
	else{my_printf("Tie");}
	return 0;
}
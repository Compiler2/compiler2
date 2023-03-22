#include <header.h>


int main_bench()
{
	int A[100][100];
	int B[100][100];
	int C[100][100];
	int i,j,a,b,d,q;
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			my_scanf("%d",&A[i][j]);
		}
	}
	my_scanf("%d",&b);
	my_scanf("%d",&d);
	for(i=0;i<b;i++){
		for(j=0;j<d;j++){
			my_scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			for(q=0;q<b;q++){
				C[i][j]+=A[i][q]*B[q][j];
			}
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			if(j<d-1)my_printf("%d ",C[i][j]);
			if(j==d-1)my_printf("%d\n",C[i][j]);
		}
	}
	return 0;
}
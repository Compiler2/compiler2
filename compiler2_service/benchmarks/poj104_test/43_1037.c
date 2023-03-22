#define NUM_ITER 34962

#include <header.h>

int main_bench()
{
	int m,i,j,k;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2){
		for(j=3;j<=i&&i%j!=0;j=j+2);
	for(k=3;k<=m-i&&(m-i)%k!=0;k=k+2);
		if(j==i&&k==m-i)	
		my_printf("%d %d\n",j,k);
}
	return 0;
}
#define NUM_ITER 4051

#include <header.h>

int main_bench()
{
	int n,i,k,p,q,m;
	my_scanf("%d\n",&n);
	int qj[2][n];
	for(i=0;i<n;i++){
		my_scanf("%d%d\n",&qj[0][i],&qj[1][i]);
		}
	for(i=0;i<n;i++){
		for(k=0;k<n-i-1;k++){
			m=k+1;
			if(qj[0][k]>qj[0][m]){
				p=qj[0][m];
				qj[0][m]=qj[0][k];
				qj[0][k]=p;
				q=qj[1][m];
				qj[1][m]=qj[1][k];
				qj[1][k]=q;
				}
			}
		}
	for(k=0;k<n-1;k++){
			m=k+1;
			if(qj[0][m]>qj[1][k]) {
				my_printf("no");
				return 0;
			}
			else{
				if(qj[1][k]>qj[1][m]){
					qj[1][m]=qj[1][k];
					qj[0][m]=qj[0][k];
				}
			}
		}
	my_printf("%d %d",qj[0][0],qj[1][n-1]);	
	return 0;
}

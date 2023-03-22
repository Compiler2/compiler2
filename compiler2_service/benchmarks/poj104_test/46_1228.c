#define NUM_ITER 587

#include <header.h>

int main_bench(){
	int sz[100][100];
	int m,n;
	my_scanf("%d %d",&m,&n);
	int i,j,p,m1,n1;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&sz[i][j]);
			}
	}
	int a = m > n ? n : m;

	for(p=0;p<a/2;p++){
		for(m1=p,n1=p;n1<n-1-p;n1++){
		    my_printf("%d\n",sz[m1][n1]);
		}
		
        for(n1=n-1-p,m1=p;m1<m-1-p;m1++){
			my_printf("%d\n",sz[m1][n1]);
		}
		
		if(m-1-p!=p)
		{
			for(m1=m-1-p,n1=n-1-p;n1>p;n1--){
				my_printf("%d\n",sz[m1][n1]);
			}
			
		}
		if(n-1-p!=p)
		{
			for(n1=p,m1=m-1-p;m1>=p+1;m1--){
				my_printf("%d\n",sz[m1][n1]);
			}
			
		}
	}
	
	if (m-1-p == p) {
		for (int i = p; i <= n-1-p; i++) 
			my_printf("%d\n", sz[p][i]);
	} else if (n-1-p == p) {
		for (int i = p; i <= m-1-p; i++)
			my_printf("%d\n", sz[i][p]);
	}
	return 0;
}
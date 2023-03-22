#define NUM_ITER 573

#include <header.h>

int main_bench()
{
	int m,n,s,i,j,a[100][100],p,q,r,t;
	my_scanf("%d%d",&m,&n);
	s=m+n-2;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	for(p=0;p<=s;p++){
		if(m>=n){
			if(p<=(n-1)){
				t=0;r=p;
			}
			else{
				if(p<=(m-1)){
					t=p-n+1;r=p;
				}
				else{
					t=p-n+1;r=m-1;
				}
			}
		}
		else{
			if(p<=(m-1)){
				t=0;r=p;
			}
			else{
				if(p<=(n-1)){
					t=0;r=m-1;
				}
				else{
					t=p-n+1;r=m-1;
				}
			}
		}
				for(q=t;q<=r;q++){
			my_printf("%d\n",a[q][p-q]);
		}
	}
	return 0;
}
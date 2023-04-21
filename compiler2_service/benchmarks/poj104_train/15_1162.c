#define NUM_ITER 586

#include <header.h>

int main_bench()
{
	int a[1000][1000];
	int i,j,star1,star2,end1,end2,b,n;
	int f=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
			if(a[i][j]==0&&f==0){
				star1=i+1;
				star2=j+1;
				f=1;
			}
			if(a[i][j]==0){
				end1=i-1;
				end2=j-1;
			}
		}
	}
		b=(end1-star1+1)*(end2-star2+1);
		my_printf("%d",b);
		return 0;
}
#define NUM_ITER 671

#include <header.h>

int main_bench()
{
	int n,a[1000][1000];
	int i,j,m=0,i1,i2,j1,j2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
			if(a[i][j]==0) m++,i2=i,j2=j;
			if(m==1) i1=i,j1=j;
		}
	}
	int num=(i2-i1-1)*(j2-j1-1);
	my_printf("%d",num);
	return 0;
}

	
	
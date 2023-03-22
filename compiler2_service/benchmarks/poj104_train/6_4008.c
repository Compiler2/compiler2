#define NUM_ITER 25

#include <header.h>




int main_bench(){
	int time;
	int m,n;
	int i,j;
	int x,y;
	int res;
	int r;
	int arr[10000];
	my_scanf("%d",&time);
	for(i=0;i<time;i++){
		res = 0;
		my_scanf("%d %d",&m,&n);

		for(j=0;j<m*n;j++){
			my_scanf("%d",&r);
			
			arr[j]=r;
		}
		for(x=0;x<m;x++)
			for(y=0;y<n;y++){
				if((x==0)||(x==(m-1)))
					res+=arr[x*n+y];
				if((y==0)&&(x!=0)&&(x!=(m-1)))
					res+=arr[x*n+y];
				if((y==(n-1))&&(x!=0)&&(x!=(m-1)))
					res+=arr[x*n+y];
			}
		my_printf("%d\n",res);
	}
	return 0;
}
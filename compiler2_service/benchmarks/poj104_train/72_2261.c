#define NUM_ITER 489

#include <header.h>

int main_bench()
{
	int n,m,i,j,a[100][100];
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==0){
				if(j==0){
					if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]){
						my_printf("%d %d\n",i,j);continue;
					}
				}
				if(j==n-1){
					if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]){
						my_printf("%d %d\n",i,j);continue;
					}
				}
				if(j!=0&&j!=n-1&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]){
					my_printf("%d %d\n",i,j);continue;
				}
			}
			if(i==m-1){
				if(j==0){
					if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]){
						my_printf("%d %d\n",i,j);continue;
					}
				}
				if(j==n-1){
					if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]){
						my_printf("%d %d\n",i,j);continue;
					}
				}
				if(j!=0&&j!=n-1&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]){
					my_printf("%d %d\n",i,j);continue;
				}
			}
			if(i!=0&&i!=m-1&&j==0){
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]){
					my_printf("%d %d\n",i,j);continue;
				}
			}
			if(i!=0&&i!=m-1&&j==n-1){
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]){
					my_printf("%d %d\n",i,j);continue;
				}
			}
			else if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]){
				my_printf("%d %d\n",i,j);continue;
			}
		}
	}
	return 0;
}
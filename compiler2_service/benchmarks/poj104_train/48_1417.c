#define NUM_ITER 2664

#include <header.h>

int main_bench()
{
	int a[9][9],b[9][9],i,j,k,m,n;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			a[i][j]=0;
			b[i][j]=0;
		}
	}
	my_scanf("%d %d",&m,&n);
	a[4][4]=m;
	for(k=0;k<n;k++){		
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				if(a[i][j]!=0){
					b[i][j-1]+=a[i][j];
					b[i][j+1]+=a[i][j];
					b[i-1][j-1]+=a[i][j];
					b[i-1][j]+=a[i][j];
					b[i-1][j+1]+=a[i][j];
					b[i+1][j-1]+=a[i][j];
					b[i+1][j]+=a[i][j];
					b[i+1][j+1]+=a[i][j];
					b[i][j]+=a[i][j]*2;
				}
			}
		}
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
		}
	}
	for(i=0;i<9;i++){
			for(j=0;j<8;j++){
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d\n",a[i][8]);
	}
	return 0;
}

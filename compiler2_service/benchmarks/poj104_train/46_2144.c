#include <header.h>

int main_bench()
{
	int i,j,sum=0,c,e,f,m,n,a[100][100];
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		my_scanf("%d",&a[i][0]);
		for(j=1;j<n;j++){
			my_scanf(" %d",&a[i][j]);
		}
	}
	for(c=0,e=m,f=n;;c++,e--,f--){
		for(j=c;j<f;j++){
			my_printf("%d\n",a[c][j]);
			sum++;
		}
		if(sum==m*n)
			break;
		for(i=c+1;i<e;i++){
			my_printf("%d\n",a[i][f-1]);
			sum++;
		}
		if(sum==m*n)
			break;
		for(j=f-2;j>c-1;j--){
			my_printf("%d\n",a[e-1][j]);
			sum++;
		}
		if(sum==m*n)
			break;
		for(i=e-2;i>c;i--){
			my_printf("%d\n",a[i][c]);
			sum++;
		}
		if(sum==m*n)
			break;
	}
	return 0;
}

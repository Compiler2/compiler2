#include <header.h>

int main_bench()
{
	int array[100][100];
	int row,col,m,n;
	my_scanf("%d%d",&m,&n);
	int a,x,y,z=0;
	for(row=0;row<m;row++){
		for(col=0;col<n;col++){
			my_scanf("%d",&array[row][col]);
		}
	}
	for(a=0;a<m+1/2&&a<n+1/2;a++){
		x=m-a;
		y=n-a;
		for(col=a;col<y;col++){
			my_printf("%d\n",array[a][col]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
		for(row=a+1;row<x;row++){
			my_printf("%d\n",array[row][y-1]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
		for(col=y-2;col>a-1;col--){
			my_printf("%d\n",array[x-1][col]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
		for(row=x-2;row>a;row--){
			my_printf("%d\n",array[row][a]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
	}
	return 0;
}

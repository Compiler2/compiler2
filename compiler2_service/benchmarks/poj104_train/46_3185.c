#define NUM_ITER 582

#include <header.h>

int main_bench()
{
	int a[100][100]={0},i,j,row,col,p,sum=0;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			my_scanf("%d",&a[i][j]);
	}
	for(p=0;;p++){
		for(j=p;j<=col-p-1;j++){
			my_printf("%d\n",a[p][j]);
			sum=sum+1;
		}
		if(sum==row*col)
			break;
		for(i=p+1;i<=row-p-1;i++){
			my_printf("%d\n",a[i][col-p-1]);
			sum=sum+1;
		}
		if(sum==row*col)
			break;
		for(j=col-p-2;j>=p;j--){
			my_printf("%d\n",a[row-p-1][j]);
			sum=sum+1;
		}
		if(sum==row*col)
			break;
		for(i=row-p-2;i>=p+1;i--){
			my_printf("%d\n",a[i][p]);
			sum=sum+1;
		}
		if(sum==row*col)
			break;
	}
	return 0;
}
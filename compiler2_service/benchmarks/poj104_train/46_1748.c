#define NUM_ITER 550

#include <header.h>


int main_bench()
{
	int a[101][101],i,j,p,n=0,row,col;
	my_scanf("%d %d",&row,&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
		    my_scanf("%d",&a[i][j]);
		}
	}


	for(p=1;p<=50;p++){
		for(i=p;i<=col+1-p;i++){
		    my_printf("%d\n",a[p][i]);
			n++;
		}
		if(n==row*col){
			    break;
		}
		for(i=p+1;i<=row+1-p;i++){
		    my_printf("%d\n",a[i][col+1-p]);
			n++;
			}
		if(n==row*col){
			    break;
		}
		for(i=col-p;i>=p;i--){
		    my_printf("%d\n",a[row+1-p][i]);
			n++;
		}		
		if(n==row*col){
			    break;
		}
		for(i=row-p;i>=p+1;i--){
		    my_printf("%d\n",a[i][p]);
			n++;
		}
		if(n==row*col){
			    break;
			}
	}
	return 0;
}
#define NUM_ITER 589

#include <header.h>

int main_bench()
{
	int i,j,k,l,row,col,shuzu[100][100],n=0,m=0,b=1;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
	    for(j=0;j<col;j++){
		my_scanf("%d",&shuzu[i][j]);
	    }
	}
	for(i=0;;i++){
	    for(j=m;j<col-i;j++){
		my_printf("%d\n",shuzu[i][j]);
		n++;
	    }
	    m++;
	    if(n==row*col){
		break;
	    }
	    for(j=b;j<row-i;j++){
		k=col-1-i;
		my_printf("%d\n",shuzu[j][k]);
		n++;
	    }
	    b++;
	    if(n==row*col){
		break;
	    }
	    for(j=k-1;j>=i;j--){
		l=row-1-i;
		my_printf("%d\n",shuzu[l][j]);
		n++;
	    }
	    if(n==row*col){
		break;
	    }
	    for(j=l-1;j>i;j--){
	        my_printf("%d\n",shuzu[j][i]);
		n++;
	    }
	    if(n==row*col){
		break;
	    }
	}
	return 0;
}
#define NUM_ITER 571

#include <header.h>

int main_bench()
{
	int row,col,x,y,a[100][100],flag=0,i,k;
	my_scanf("%d%d",&row,&col);
	for(x=0;x<row;x++){
		for(y=0;y<col;y++){
			my_scanf("%d",&a[x][y]);}
	}
	k=(row>col)?col:row;
    for(i=0;i<k;i++){
		for(y=i;y<col-i;y++){
			my_printf("%d\n",a[i][y]);
			flag++;}
          if(flag==row*col)
			  break;
		for(x=i+1;x<row-i;x++){
			my_printf("%d\n",a[x][col-1-i]);
	    	flag++;}
		if(flag==row*col)
			  break;
		for(y=col-2-i;y>=i;y--){
			my_printf("%d\n",a[row-1-i][y]);
	    	flag++;}
		if(flag==row*col)
			  break;
		for(x=row-2-i;x>i;x--){
			my_printf("%d\n",a[x][i]);
	    	flag++;}
		if(flag==row*col)
			  break;
	}
	return 0;
}

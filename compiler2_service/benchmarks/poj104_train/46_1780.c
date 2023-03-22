#include <header.h>

int main_bench(){
	int row,col,Row,Col,sum;
	int array[100][100];
	my_scanf("%d%d",&row,&col);
	sum=row*col;
	
	for(Row=0;Row<row;Row++){
		for(Col=0;Col<col;Col++){
			my_scanf("%d",&array[Row][Col]);
		}
	}
	
	Row=0;Col=-1;
	int r,c;
	row--;
	while(1){
		for(c=0;c<col;c++){
			Col++;
			my_printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		col--;
		
		for(r=0;r<row;r++){
			Row++;
			my_printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		row--;
		
		for(c=0;c<col;c++){
			Col--;
			my_printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		col--;
		
		for(r=0;r<row;r++){
			Row--;
			my_printf("%d\n",array[Row][Col]);
			sum--;
		}
		if(sum==0)
			break;
		row--;
		
	}
	return 0;
}

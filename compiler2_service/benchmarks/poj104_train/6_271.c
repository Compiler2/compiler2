#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		int row;
		int col;
		int total=0;
		int s[100][100];
		my_scanf("%d%d",&row,&col);
		int x,y;
		for(x=0;x<row;x++){
			for(y=0;y<col;y++){
				my_scanf("%d",&s[x][y]);
			}
		}
		if(row<3||col<3){
			for(x=0;x<row;x++){
			   for(y=0;y<col;y++){
				total+=s[x][y];
			}
			}
			my_printf("%d\n",total);
			}else{
		for(y=0;y<col;y++){
			total+=s[0][y];
		}
		for(y=0;y<col;y++){
			total+=s[row-1][y];
		}
		for(x=0;x<row;x++){
			total+=s[x][0];
		}
		for(x=0;x<row;x++){
			total+=s[x][col-1];
		}
		total=total-s[0][0]-s[0][col-1]-s[row-1][0]-s[row-1][col-1];
		my_printf("%d\n",total);
			}
		
	}
	return 0;
}


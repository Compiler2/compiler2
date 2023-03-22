#include <header.h>

int main_bench()
{
	int row,col,i,j,a[100][100],counter;
	my_scanf("%d %d",&row,&col);
	counter=row*col;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++) my_scanf("%d",&a[i][j]);
	}
	row-=1;col-=1;
	for(i=0;i<=row/2;i++)
	{
		for(j=i;j<=col-i;j++){
			my_printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
		j--;
		for(i+=1;i<=row-(col-j);i++){
			my_printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
		i--;
		for(j-=1;j>=row-i;j--){
			my_printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
		j++;
		for(i-=1;i>j;i--){
			my_printf("%d\n",a[i][j]);
			counter--;
			if(counter==0) goto end;
		}
	}
    end:
	;
}
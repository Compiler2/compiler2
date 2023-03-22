#define NUM_ITER 526

#include <header.h>

int main_bench(){
int a[100][100];
int row,col,i,j,x=0,y;
my_scanf("%d%d",&row,&col);
for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		my_scanf("%d",&a[i][j]);
	}
}
int sum=0;
i=0;
while(sum<(row*col)){
	for(j=x;j<col;j++){
		my_printf("%d\n",a[i][j]);
		sum++;
		a[i][j]=-1;
		y=j;
		if(a[i][j+1]==-1){
			break;
		}
	}
	if(sum==row*col){
		break;
	}
 for(i=i+1;i<row;i++){
		my_printf("%d\n",a[i][y]);
		sum++;
		a[i][y]=-1;
		x=i;
		if(a[i+1][y]==-1){
			break;
		}
	}
	if(sum==row*col){
		break;
	}
for(j=y-1;j>=0;j--){
		my_printf("%d\n",a[x][j]);
		sum++;
		a[x][j]=-1;
		y=j;
		if(a[x][j-1]==-1){
			break;
		}
	}
	if(sum==row*col){
		break;
	}
for(i=x-1;i>0;i--){
		my_printf("%d\n",a[i][y]);
		sum++;
		a[i][y]=-1;
		x=i;
		if(a[i-1][y]==-1){
			break;
		}
	}
	if(sum==row*col){
		break;
	}
}



return 0;
}


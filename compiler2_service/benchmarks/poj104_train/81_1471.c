#define NUM_ITER 234698

#include <header.h>



int change(int a[5][5],int x,int y);
int main_bench()
{
	int n,m;
	int a[5][5],i,j;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			my_scanf("%d",&a[i][j]);
		}
	my_scanf("%d%d",&n,&m);
	

		
	if(change(a,n,m)==1){
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j!=4)
				my_printf("%d ",a[i][j]);
			else
				my_printf("%d",a[i][j]);
		}
		my_printf("\n");
		}
	}else 
		my_printf("error\n");
	return 0;
	
}

int change(int a[5][5],int x,int y)
{
	int k,temp;
	if(x>=0&&x<5&&y>=0&&y<5){
		for(k=0;k<5;k++){
			temp=a[x][k];
			a[x][k]=a[y][k];
			a[y][k]=temp;	
		}
	return 1;
	}
	else
		return 0;
}




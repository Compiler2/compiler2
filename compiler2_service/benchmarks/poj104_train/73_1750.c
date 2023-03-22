#define NUM_ITER 164327

#include <header.h>


int row_max(int a[][5],int i,int j)
{
	int k,flag=1;

	for(k=0;k<5;k++){
		if(*(*(a+i)+k)>*(*(a+i)+j)){
			flag=0;
			break;
		}
	}

	return flag;
}

int col_min(int a[][5],int i,int j)
{
	int k,flag=1;

	for(k=0;k<5;k++){
		if(*(*(a+k)+j)<*(*(a+i)+j)){
			flag=0;
			break;
		}
	}

	return flag;
}

int main_bench()
{
	int a[5][5];
	int i,j,flag=0;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			my_scanf("%d",*(a+i)+j);
	}

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(row_max(a,i,j)&&col_min(a,i,j)){
				flag=1;
				my_printf("%d %d %d\n",i+1,j+1,*(*(a+i)+j));
			}
		}
	}

	if(!flag)
		my_printf("not found\n");
}
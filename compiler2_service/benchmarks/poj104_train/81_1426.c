#define NUM_ITER 225110

#include <header.h>


int change(int a,int b);
int main_bench()
{
	int a[5][5],b[5],i,j,x,y,result;
	for(i=0;i<5;i++){
		for(j=0;j<=4;j++){
		my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&x,&y);
	result=change(x,y);
	if(result==0)
		my_printf("error");
	if(result==1){
		for(i=0;i<=4;i++){
		b[i]=a[x][i];
		a[x][i]=a[y][i];
		a[y][i]=b[i];
		}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j==0){
			my_printf("%d",a[i][j]);
			}
			if(j>=1&&j<=3){
			my_printf(" %d",a[i][j]);
			}
			if(j==4){
				if(i==4){
				my_printf(" %d",a[i][j]);
				}else{
				my_printf(" %d\n",a[i][j]);
				}
			}
		}
	}
	}
	return 0;
}
int change(int a,int b){
	if(a>=0&&a<=4&&b>=0&&b<=4){
	return 1;
	}else{
	return 0;
	}
}
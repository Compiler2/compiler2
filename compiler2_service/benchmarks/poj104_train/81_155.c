#include <header.h>

int main_bench(){
	int a[5][5],m,n,e[5];
	int i=0;
	int j=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);
	if(m<5&&n<5&&m!=n&&m>=0&&n>=0){
	for(j=0;j<5;j++){
		e[j]=a[m][j];
		a[m][j]=a[n][j];
		a[n][j]=e[j];
	}
	my_printf("%d ",a[0][0]);
	my_printf("%d ",a[0][1]);
	my_printf("%d ",a[0][2]);
	my_printf("%d ",a[0][3]);
	my_printf("%d\n",a[0][4]);
	my_printf("%d ",a[1][0]);
	my_printf("%d ",a[1][1]);
	my_printf("%d ",a[1][2]);
	my_printf("%d ",a[1][3]);
	my_printf("%d\n",a[1][4]);
	my_printf("%d ",a[2][0]);
	my_printf("%d ",a[2][1]);
	my_printf("%d ",a[2][2]);
	my_printf("%d ",a[2][3]);
	my_printf("%d\n",a[2][4]);
	my_printf("%d ",a[3][0]);
	my_printf("%d ",a[3][1]);
	my_printf("%d ",a[3][2]);
	my_printf("%d ",a[3][3]);
	my_printf("%d\n",a[3][4]);
	my_printf("%d ",a[4][0]);
	my_printf("%d ",a[4][1]);
	my_printf("%d ",a[4][2]);
	my_printf("%d ",a[4][3]);
	my_printf("%d\n",a[4][4]);
	}else{
		my_printf("error");
	}
	return 0;
}
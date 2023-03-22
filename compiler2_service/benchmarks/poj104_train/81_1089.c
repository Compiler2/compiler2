#define NUM_ITER 222212

#include <header.h>

int a[5][5],m,n;
int f(int x,int y){
	int temp[5],i;
	if(x>4||y>4)return 0;
	else {for(i=0;i<5;i++){
		temp[i]=a[x][i];
		a[x][i]=a[y][i];
		a[y][i]=temp[i];
	}
	return 1;
	}
}
int main_bench()
{
	int i,j,t;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d %d",&m,&n);
	t=f(m,n);
	if(t==0)my_printf("error\n");
	else for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_printf("%d%c",a[i][j],j==4?'\n':' ');
		}
	}
}
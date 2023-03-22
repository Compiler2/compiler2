#define NUM_ITER 234867

#include <header.h>

int f(int m,int n)
{
	if(m<=4&&n<=4) return 1;
	else return 0;
}
int main_bench()
{
	int x,y,i,j,a[5][5],c;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&x,&y);
	if(!f(x,y)) my_printf("error");
	else {
		for(i=0;i<5;i++){
			c=a[x][i];
			a[x][i]=a[y][i];
			a[y][i]=c;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0)my_printf("%d",a[i][j]);
				else my_printf(" %d",a[i][j]);
			}
			my_printf("\n");}
	}
}



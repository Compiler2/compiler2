#include <header.h>

int main_bench()
{
	int sz1[5][5];
	int n,m,i,j;
	int sz(int sz1[5][5],int m,int n);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&sz1[i][j]);
	my_scanf("%d%d",&m,&n);
	if(sz(sz1,m,n)==0)
	my_printf("error");
	return 0;
}
int sz(int sz1[5][5],int m,int n)
{
	int i,j,t,y;
	if(n<=4&&m<=4){
		y=1;
		for(i=0;i<5;i++){
			t=sz1[n][i];
			sz1[n][i]=sz1[m][i];
			sz1[m][i]=t;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				my_printf("%d",sz1[i][j]);
				if(j<4)
					my_printf(" ");
			}
			if(i<4)
				my_printf("\n");
		}
	}
	else
		y=0;
	return(y);
}
#define NUM_ITER 1083

#include <header.h>

int t[10][10],a,b;
int andian(int x,int y)
{ int i,j=0;
	for(i=0;i<=b-1;i++)
	if(t[x][y]<t[x][i])
		j++;
	for(i=0;i<=a-1;i++)
	if(t[x][y]>t[i][y])
		j++;
	if(j==0)
	{my_printf("%d+%d",x,y);
	return 1;
	}
	else return 0;
}
int main_bench()
{ int c,d=0,r,i,j;
	my_scanf("%d,%d",&a,&b);
	for(i=0;i<=a-1;i++)
	{for(j=0;j<=b-1;j++)
	my_scanf("%d",&t[i][j]);
	}
	for(i=0;i<=a-1;i++)
	{for(j=0;j<=b-1;j++)
	{d=andian(i,j)+d;
	}
	}
	if(d==0)
		my_printf("No");

}
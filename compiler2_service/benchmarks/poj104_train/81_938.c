#define NUM_ITER 269783

#include <header.h>

int main_bench()
{int huan(int a[5][5],int x,int y);
int a[5][5];
int i,j,n,m;

for(i=0;i<5;i++)
my_scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
my_scanf("%d %d",&n,&m);
j=huan(a,n,m);
if(j==0)
my_printf("error");
else 
{
	for(i=0;i<5;i++)
		my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);}

}
int huan(int a[5][5],int x,int y)
{
	int t,s,j;

	if(x<=4&&x>=0&&y<=4&&y>=0)
{j=1;
	for(s=0;s<5;s++)
	{t=a[x][s];a[x][s]=a[y][s];a[y][s]=t;}
}
	else j=0;
	return(j);
	

}
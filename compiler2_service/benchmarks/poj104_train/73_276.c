#define NUM_ITER 205450

#include <header.h>

int findmax(int *p)
{	int i,t=0;
	for(i=0;i<5;i++)
	{
		if(*(p+t)<*(p+i))t=i;
	}
	return (t);	
}
int dmin(int a[5][5],int c,int r)
{	int i;
	for(i=0;i<5;i++)
	{
		if(a[i][c]<a[r][c])return 0;
	}
	return 1;
}
int main_bench()
{
	int i,j,a[5][5],b[5],k=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{
		if(dmin(a,b[i]=findmax(a[i]),i)){my_printf("%d %d %d",i+1,b[i]+1,a[i][b[i]]);k++;}
	}
			
	if(k==0) my_printf("not found");
}
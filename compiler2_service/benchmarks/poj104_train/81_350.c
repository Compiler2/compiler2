#define NUM_ITER 229533

#include <header.h>

int main_bench()
{
	int f(int s[5][5],int x,int y);
	int a[5][5],m,n,i,j,t;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			my_scanf ("%d",&a[i][j]);
		my_scanf ("%d %d",&m,&n);
		t=f(a,m,n);
		if (t==0)
			my_printf("error\n");
		if (t==1)
			for (i=0;i<5;i++)
			{
				for (j=0;j<4;j++)
					my_printf("%d ",a[i][j]); 
				my_printf("%d",a[i][4]);
				my_printf("\n");
			}
}
 int f(int s[5][5],int x,int y)
 {
	 int term,i;
	 if (x>4||y>4)return 0;
	 else
	 {
		 for (i=0;i<5;i++)
		 {
			 term=s[x][i];
		     s[x][i]=s[y][i];
		     s[y][i]=term;
		 }
	 } return 1;
 }


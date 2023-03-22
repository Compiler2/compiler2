#define NUM_ITER 36858

#include <header.h>

int a[200][2];
int main_bench()
{
	int n,i,win,tie,lose;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d%d",&a[i][0],&a[i][1]);
	win=0;
	tie=0;
	lose=0;
	for(i=0;i<n;i++)
	{
		if(a[i][0]==0&&a[i][1]==1)
			win+=1;
		else if(a[i][0]==1&&a[i][1]==2)
			win+=1;
		else if(a[i][0]==2&&a[i][1]==0)
			win+=1;
		else if(a[i][0]==a[i][1])
			tie+=1;
	}
	lose=n-win-tie;
	if(win>lose)
		my_printf("A\n");
	else if(win<lose)
		my_printf("B\n");
	else
		my_printf("Tie\n");
		return 0;
}

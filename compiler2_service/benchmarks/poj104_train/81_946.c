#define NUM_ITER 219398

#include <header.h>

int main_bench()
{
	int a[5][5];
	int i,j,m,n;
	int t[5]={0};
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&m,&n);
	 if(m<5&&n<5)   
	 {   
		 for(i=0;i<5;i++)
		 {
			 t[i]=a[m][i];
	         a[m][i]=a[n][i];
		     a[n][i]=t[i];
		 }
	 for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			my_printf("%d%c",a[i][j],j<4?' ':'\n');
		}
	 }
	else    
		my_printf("error\n");
}
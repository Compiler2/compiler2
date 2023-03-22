#define NUM_ITER 234084

#include <header.h>

int main_bench()
{
	int a[5][5],m,n,i,j,t;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&m,&n);
	if(m<0||m>4||n<0||n>4)
		my_printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
		for(i=0;i<5;i++)
		  for(j=0;j<5;j++)
		  {
			  my_printf("%d",a[i][j]);
			  if(j>=0&&j<4)my_printf(" ");
			  else my_printf("\n");
		  }
	}
	return 0;
}
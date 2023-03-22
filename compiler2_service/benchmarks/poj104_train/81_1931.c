#define NUM_ITER 212029

#include <header.h>


int huan(int n,int m)
{

  my_scanf("%d%d",&n,&m);
  if (n<0||n>4||m<0||m>4)
	  return 0;
  else
  return 1;
}

int main_bench()
{
int a[5][5],n,m,i,j,b[5];

 for (i=0;i<5;i++)
  {
    for (j=0;j<5;j++)
	{
	  my_scanf("%d",&a[i][j]);
	}
  }
my_scanf("%d%d",&n,&m);
if (huan(n,m)==0)
  my_printf("error\n");
if (huan(n,m)==1)
{
	for(i=0;i<5;i++)
	{
	  b[i]=a[n][i];
	  a[n][i]=a[m][i];
	  a[m][i]=b[i];
	}
  for (i=0;i<5;i++)
  {
    for (j=0;j<4;j++)
	{
	  my_printf("%d ",a[i][j]);
	}
	my_printf("%d\n",a[i][4]);
  }
}
	return 0;
}

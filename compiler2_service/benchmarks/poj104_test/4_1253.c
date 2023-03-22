#define NUM_ITER 497

#include <header.h>

int main_bench()
{
int r,c,i,j,a[101][101],p;
my_scanf("%d%d",&r,&c);
for(i=1;i<=r;i++)
{
  for(j=1;j<=c;j++)
  {
   my_scanf("%d",&a[i][j]);
  }
}
for(p=2;p<=r+c;p++)
{
if(p-1<=c)
{
i=1;
j=p-i;
}
else
{
	j=c;
	i=p-j;
}
while (i>=1&&j>=1&&i<=r&&j<=c)
{
	my_printf("%d\n",a[i][j]);
	i++;
	j--;
}
}
return 0;
}


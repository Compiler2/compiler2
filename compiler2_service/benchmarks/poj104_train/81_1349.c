#define NUM_ITER 222809

#include <header.h>

int trans(int a[][5],int n,int m)
{
if (0<=n&&n<5&&0<=m&&m<5)
{
 int i,tmp;
 for(i=0;i<5;i++)
 {
   tmp=a[n][i];
   a[n][i]=a[m][i];
   a[m][i]=tmp;
} 
return 1;
}
else 
return 0;
}
int main_bench()
{
  int i,j,value[5][5];
int n,m;
 for (i=0;i<5;i++)
 for(j=0;j<5;j++)
{
my_scanf("%d",&value[i][j]);
}
my_scanf("%d %d",&n,&m);
if (trans(value,n,m)==0)
my_printf("error\n");
else
{
 for (i=0;i<5;i++)
my_printf("%d %d %d %d %d\n",value[i][0],value[i][1],value[i][2],value[i][3],value[i][4]);
}
return 0;
}
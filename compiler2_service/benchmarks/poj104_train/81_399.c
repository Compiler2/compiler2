#define NUM_ITER 250068

#include <header.h>

int main_bench()
{
int a[5][5],b[5];
int m,n,i,j;
for(i=0;i<=4;i++)
{my_scanf("%d %d %d %d %d\n",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);}
my_scanf("%d %d",&m,&n);

if(m>=0&&m<=4&&n>=0&&n<=4) 
{for(j=0;j<=4;j++)
{b[j]=a[m][j];
 a[m][j]=a[n][j];
 a[n][j]=b[j];}
for(i=0;i<=4;i++)
{my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);}}
if(m<0||m>4||n<0||n>4) my_printf("error\n");
}


#include <header.h>

int main_bench()
{int jiaohuan(int array[][5],int,int);
int i,j,m,n,a[5][5];
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
my_scanf("%d",&a[i][j]);}
my_scanf("%d %d",&m,&n);
if(jiaohuan(a,m,n))
{for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{my_printf("%d",a[i][j]);
if(j!=4)my_printf(" ");}
my_printf("\n");}}
else
my_printf("error");
my_printf("\n");}


int jiaohuan(int array[][5],int m,int n)
{int t,i;
if((m>4)||(n>4))
    return(0);
else
{for(i=0;i<5;i++)
{t=array[m][i];
array[m][i]=array[n][i];
array[n][i]=t;}
return(1);}}
#include <header.h>

int f(int x,int y)
{int z;
if(x>=0&&x<=4&&y>=0&&y<=4)
z=1;
else
z=0;
return z;
}
int main_bench()
{int n,m,i,j,a[5][5],(*p)[5];
p=a;
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
my_scanf("%d",*(p+i)+j);
}
my_scanf("%d%d",&n,&m);
if(f(m,n)==0)
my_printf("error");
else
{for(i=0;i<n;i++)
{my_printf("%d",p[i][0]);
	for(j=1;j<5;j++)
my_printf(" %d",p[i][j]);
my_printf("\n");
}
my_printf("%d",p[m][0]);
for(j=1;j<5;j++)
my_printf(" %d",p[m][j]);
my_printf("\n");
for(i=n+1;i<m;i++)
{my_printf("%d",p[i][0]);
	for(j=1;j<5;j++)
my_printf(" %d",p[i][j]);
my_printf("\n");
}
my_printf("%d",p[n][0]);
for(j=1;j<5;j++)
my_printf(" %d",p[n][j]);
my_printf("\n");
for(i=m+1;i<5;i++)
{my_printf("%d",p[i][0]);
	for(j=1;j<5;j++)
my_printf(" %d",p[i][j]);
my_printf("\n");}
}
return 0;
}

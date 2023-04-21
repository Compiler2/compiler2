#define NUM_ITER 47

#include <header.h>

int main_bench()
{
int a,b,d,i,j,x;
int m[102][102];
int n[102][102];
int r[102][102];
my_scanf("%d %d\n",&a,&b);
   for(int i=1;i<=a;i++)
   {
       for(int j=1;j<=b-1;j++)
       {
           my_scanf("%d ",&m[i][j]);
       }
       my_scanf("%d",&m[i][b]);
     
   }


my_scanf("%d %d\n",&b,&d);
   for(int i=1;i<=b;i++)
   {
       for(int j=1;j<=d-1;j++)
       {
           my_scanf("%d ",&n[i][j]);
       }
       my_scanf("%d",&n[i][d]);
      
   }


for(int i=1;i<=a;i++)
  {
  for(int j=1;j<=d;j++)
    {
    r[i][j]=m[i][0]*n[0][j];
    for(int x=1;x<=b;x++)
    {r[i][j]=r[i][j]+m[i][x]*n[x][j];}
    }
  }

for(int i=1;i<=a-1;i++)
   {
   for(int j=1;j<=d-1;j++)
    {
    my_printf("%d ",r[i][j]);
    }
    my_printf("%d",r[i][d]);
    my_printf("\n");
   }
for(int j=1;j<=d-1;j++)
{my_printf("%d ",r[a][j]);}
my_printf("%d",r[a][d]);
getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}


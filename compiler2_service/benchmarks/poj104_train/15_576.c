#define NUM_ITER 715

#include <header.h>


int main_bench()
{
int a[1000][1000];
int i,j,n,t,i1=0,j1=0,i2=0,j2=0;
my_scanf("%d",&n); 
for(i=0;i<=n-1;i++)
    {for(j=0;j<=n-1;j++)
         my_scanf("%d",&a[i][j]);
    }
for(i=0;i<=n-1;i++)
 {  
    {for(j=0;j<=n-1;j++)
         if(a[i][j]==0)
             {i1=i;
              j1=j;
              break;
             }
    }
    if(a[i1][j1]==0)
        break;
  }
for(i=n-1;i>=i1;i--)
 {
    {for(j=n-1;j>=0;j--)
         if(a[i][j]==0)
             {i2=i;
              j2=j;
              break;
             }
     if(a[i2][j2]==0)
         break;
  }
 }
t=(i2-i1-1)*(j2-j1-1);
my_printf("%d",t);
return 0;
}
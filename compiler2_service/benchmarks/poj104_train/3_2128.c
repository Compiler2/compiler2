#define NUM_ITER 55349

#include <header.h>

int main_bench()
{
int n,k,i,j,b=0;
int num[1002];
my_scanf("%d %d\n",&n,&k);
my_scanf("%d",&num[0]);
for(i=1;i<=n-1;i++)
my_scanf(" %d",&num[i]);
for(i=0;i<=n-1;i++)
{for(j=i+1;j<=n-1;j++)
     {if(num[i]+num[j]==k)
          {my_printf("yes");
           b=1;
             break;
           }
     }
if(num[i]+num[j]==k)
break;}
if(b==0)
my_printf("no");
return 0;
}
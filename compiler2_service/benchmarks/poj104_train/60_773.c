#define NUM_ITER 4194

#include <header.h>

int main_bench()
{
	int n,i,j;
 my_scanf("%d",&n);
 int a[20000];
 for(i=0;i<n;i++)
 {a[i]=0;
 for(j=2;j<(i+1);j++)
 {if((i+1)%j==0)
 {a[i]++;}
 }
 }
for(i=2;i<n-2;i++)
{if(a[i]==0&&a[i+2]==0)
{ my_printf("%d %d\n",i+1,i+3);}
}
int b=0;
for(i=2;i<n-2;i++)
{if(a[i]==0)
{b++;}
}
if(b==0)
{my_printf("empty");}
 
   return 0;
}

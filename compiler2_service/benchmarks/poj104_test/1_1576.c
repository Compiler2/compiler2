#define NUM_ITER 5930

#include <header.h>

int col(int a,int b);
int main_bench()
{int n,i,m,l;
my_scanf("%d",&n);
for(i=1;i<=n;i++)
   {my_scanf("%d",&m);
   l=col(m,2)+1;
   my_printf("%d\n",l);
   }
   return 0;
}
int col(int a,int b)
{int i,t,tt=0,sig=0;
for(i=b;(i<a/2)&&((a/i)>=i);i++)
  {
	if(a%i==0)
    {t=a/i;
     tt=tt+1+col(t,i);
     sig=1;
    }
  }
if(sig==0)
  tt=0;
 return(tt);
}
#define NUM_ITER 79636

#include <header.h>


int xiangguan(int n)
{if(n%7==0)
 return(0);
 else if(n%10==7||n/10==7)
 return(0);
 else return(1);
}

int main_bench()
{int n;
 my_scanf("%d",&n);
 int i,sum=0;
 for(i=1;i<=n;i++)
 if(xiangguan(i)) 
 sum+=i*i;
 my_printf("%d",sum);
}
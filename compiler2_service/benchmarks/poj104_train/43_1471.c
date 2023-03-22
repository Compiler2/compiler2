#define NUM_ITER 12079

#include <header.h>

int zhi(int i)
{
    int j,d;
    d=1;
    for(j=1;j<=i/2; j++)  
    {
      if(i%j==0) d=j;
    }
    return (d);
}
int main_bench()
{
    int m,i,j;
    int d=1;
    my_scanf("%d",&m);
    for(i=3; i<=m/2;i=i+2)  
    {
      j=m-i;
      if (zhi(i) == 1 && zhi(j) == 1) 
	  my_printf("%d %d\n",i,j);
    }
}

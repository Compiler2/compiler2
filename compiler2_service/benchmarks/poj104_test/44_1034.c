#define NUM_ITER 409152

#include <header.h>

int turn(int a);
int main_bench()
{
 int n;
 for(int i=0;i<6;i++)
 {
     my_scanf("%d",&n);
     if (n<0)
     my_printf("-%d\n",turn(-n));
     else    
     my_printf("%d\n",turn(n));
 }
}
int turn(int a)
{
  int i,k,m=0;
  char x[1000];
  for (i = 0;a!=0;i++)    
    {
     x[i] = a%10;
     a=a/10;
    }
   for (k = 0;k<i;k++) 
   m=x[k]+10*m;   
   return (m); 
}
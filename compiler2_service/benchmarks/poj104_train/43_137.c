#define NUM_ITER 9558

#include <header.h>


int main_bench()
{
  int m;
  my_scanf("%d",&m);
  int a,i;
  for(a=3;a<=(m/2);a=a+2)
  {
      int c=0;
      for(i=2;i<a;i++)
      if(a%i==0)
      c++; 
      int d=0;
      for(i=2;i<m-a;i++)
      if((m-a)%i==0)
      d++; 
     
     
     if(c==0&&d==0)
    my_printf("%d %d\n",a,m-a);  
  }
  getchar();
  getchar(); 
}
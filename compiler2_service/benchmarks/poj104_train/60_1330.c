#include <header.h>

int main_bench()
{
  int i,n,k,j,p;
  p=0;
  my_scanf("%d",&n);
  if(n<5)
  my_printf("empty");
  if(n>=5)
  {
  for(i=1;i<=(n-2);i++)
  {
      for(k=2;k<i;k++)
      {
         if(i%k==0)
            break;
         if(k==i-1)
         {  
                  for(j=2;j<i+2;j++)
                  {
                      if((i+2)%j==0)
                      break;
                      if(j==i+1)
                      {
                      my_printf("%d %d\n",i,(i+2));
                      p=1;
                      }
                  }
         }       
      } 
  }
  }
if(p=0)
my_printf("empty");

return 0;
}

#define NUM_ITER 1528099

#include <header.h>

int main_bench()
{
  char a[6000];
  int b[300];
  int c=0,d=-2,e,f,i;
  gets(a);
  b[0]=0;
  for(i=0;;i++)
  {
    if(a[i]==0)
    break;
    else
    { 
        if(a[i]!=32)
        b[c]=b[c]+1;
        else
        {  e=i;
           f=e-d;
           d=e;
           if(f!=1)
           c=c+1;
         }
      }
    }
   for(i=0;i<c;i++)
   my_printf("%d,",b[i]);
   my_printf("%d",b[c]);
}       
          
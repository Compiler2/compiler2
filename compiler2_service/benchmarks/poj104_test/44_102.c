#define NUM_ITER 394083

#include <header.h>

int reverse(int a)
{ 
  int s[100];
  int i=10,j,b=0;
  if (a<0)
  {
     a=a*(-1);
     for (j=1; ;j++)
     {
         s[j]=a%i;
         b=s[j]+b*10;
         a=a/i;
         if (a==0)
         break;
     }
     return -b;
  }
  else
  {
     for (j=1; ;j++)
     {
         s[j]=a%i;
         b=s[j]+b*10;
         a=a/i;
         if (a==0)
         break;
     }
  }
  return b;
}
int main_bench ()
{
    int a[6],i;
    for (i=0;i<=5;i++)
    my_scanf ("%d",&a[i]);
    for (i=0;i<=5;i++)
    
        
        {
            my_printf ("%d\n",reverse(a[i]));
        }
    
getchar();
getchar();
getchar();
}
      
  
#define NUM_ITER 759606

#include <header.h>


void trans(char a[])
{
     int i;
     for (i=0;i<=strlen(a)-1;i++)
     {
         if (a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]+32;
         }
}

int main_bench()
{
  char a[80],b[80];
  gets(a);
  gets(b);
  trans(a);
  trans(b);
  int i,j,flag=1;
  for (i=0,j=0;i<=strlen(a)-1&&j<=strlen(b)-1;i++,j++)
  {
      if (a[i]<b[j])
      {
         my_printf("<");
         flag=0;
         break;
      }
      else if (a[i]>b[j])
      {
           my_printf(">");
           flag=0;
           break;
      }
  }
  if (flag==1)
  my_printf("="); 	
  return 0;
}
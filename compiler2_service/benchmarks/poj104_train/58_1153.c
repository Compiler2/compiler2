#define NUM_ITER 116

#include <header.h>


int main_bench()
{
  int i,j,k,n,m,x=0;
  char a[80]={'\0'};
  my_scanf("%d\n",&n);
  for(j=0;j<n;j++)
  {char a[80]={'\0'};
  gets(a);
  x=0;
  if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
  x=1;
  else x=0;
     for(k=1;k<80;k++)
       {if(a[k]=='_'||(a[k]>='a'&&a[k]<='z')||(a[k]>='A'&&a[k]<='Z')||(a[k]>='0'&&a[k]<='9'))
         x=x;
         else {if(a[k]!='\0')
           x=0;
           else {
                 for(m=k;m<80;m++)
                   {if(a[k]!='\0')
                        {x=0;
                          break;
                          }
                   }
                   if(m=80)x=x;
               }}
       }
  my_printf("%d\n",x);}
  return 0;
}
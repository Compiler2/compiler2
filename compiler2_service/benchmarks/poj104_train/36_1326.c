#include <header.h>

int main_bench()
{
 char a[200],b[200];
 int m[100],n[100],k,l,i,j,e=0;
 my_scanf("%s %s",a,b);
 k=strlen(a);
 l=strlen(b);
 if(k!=l)
 {
  my_printf ("NO");
  } 
  if(k==l)
  {
   for(i=0; i<k; i++)
   {
    for(j=0; j<k; j++)
    {
     if(a[i]==b[j])
     {
      b[j]=1;
      e++;
      break;
      }
     }
    }
    if(e==k)
    {
     my_printf ("YES");
     }
    else
    my_printf ("NO");
  }
return 0;
} 
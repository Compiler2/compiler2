#define NUM_ITER 1235266

#include <header.h>

int main_bench()
{
 char a[100];
 char b[100][100];
 gets(a);
 int i,l,w=0,j=0,k=0,s=0;
 l=strlen(a);
 for (i=0;i<l;i++)
     {
      if (a[i]==' ') 
         {  
           w=0;
           j++;
           k=0;
          }
       else if (w==0||w==1)
             {
              b[j][k]=a[i];
              w=1;
              k++;
             }
      }
for (i=0;i<l;i++)
    {
     if (a[i]==' ') 
        w=0;
    else if (w==0)
          {
           s++;
            w=1;
           }
    }
for (i=s;i>0;i--)
    {
     my_printf ("%s ",b[i]);}
    my_printf ("%s",b[0]);

}
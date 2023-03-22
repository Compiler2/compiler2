#include <header.h>

int main_bench()
{
   char a[256];
   char b[256];
   char c[256];
   my_scanf("%s",a);
   my_scanf("%s",b);
   my_scanf("%s",c);
   int x,y,i,j,p,q,k,r,t,z;
   x=strlen(a);
   y=strlen(b);
   q=0;
   for(i=0;q==0&&i<x;i++)
   {
       if(b[0]==a[i])
       {
           p=i;
           for(j=0;b[j]==a[p]&&b[j]!='\0'&&a[p]!='\0';j++)
           {
               p++;
           }
           if(j==y)
           {
               q=q+1;
           }
       }
   }
   if(q==0)
   {
       for(z=0;z<x;z++)
       {
           my_printf("%c",a[z]);
       }
   }
   if(q!=0)
   {
       for(k=0;k<i-1;k++)
       {
          my_printf("%c",a[k]);
       }
       for(r=0;r<y;r++)
       {
          my_printf("%c",c[r]);
       }
       for(t=i+y-1;t<x;t++)
       {
          my_printf("%c",a[t]);
       }
   }
}
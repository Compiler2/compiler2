#include <header.h>

int main_bench()
{
   char a[1000],b[1000];
   int i,j,m,n,k,q,p,t;
   my_scanf("%s%s",a,b);
   m=strlen(a);
   n=strlen(b);
   if(m!=n) my_printf("NO\n");
   else 
   {
      for(i=0;i<m;i++)
      {
        for(j=0,p=0;j<m;j++)
        if(a[i]==a[j]) p++;
        for(k=0,q=0;k<n;k++)
        if(a[i]==b[k]) q++;
        if(q!=p) 
        {
          my_printf("NO\n");
          break;
        }
        else t++;
      }
      if(t==n) my_printf("YES\n");
   }
}
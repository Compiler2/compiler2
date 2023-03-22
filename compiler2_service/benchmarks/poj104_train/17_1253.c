#define NUM_ITER 1670624

#include <header.h>

int main_bench()
{
 int n,i,j;
 char a[101];
 while(gets(a))
 { 
         n=strlen(a);
         for(i=0;i<=n-2;i++)
         {
           my_printf("%c",a[i]);
         }
         my_printf("%c\n",a[n-1]);
         for(i=0;i<n;i++)   
         {
            if(a[i]==')')
            {                
               for(j=i;j>=0;j--)
               {
                  if(a[j]=='(')
                  {
                     a[j]=' ';
                     a[i]=' ';
                     break;
                  }
               }
            }
         }
         for(i=0;i<n;i++)
         {
            if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]==' ')
            {
              a[i]=' ';
            }
            else if(a[i]==')')
            {
                 a[i]='?';
            }
            else if(a[i]=='(')
            {
                 a[i]='$';
            }
         }
         for(i=0;i<n;i++)
         {
            my_printf("%c",a[i]);
         }
         my_printf("\n");
 }                
    
}

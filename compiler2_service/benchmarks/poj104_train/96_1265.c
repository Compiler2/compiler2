#define NUM_ITER 1232588

#include <header.h>

int main_bench()
{
     char s[100]={0};
     my_scanf("%s",s);   
     int a[100],b;
     int c,d,e;
     c=s[0]-'0';
     d=s[1]-'0';
     e=c*10+d;
     int l=strlen(s);
     if(l==1)
     {
             my_printf("0\n");
             my_printf("%c",s[0]);
     }
     else if((e<13)&&(l==2))
     {
          my_printf("0");
          my_printf("\n");
          my_printf("%d",e);
     }
     else
     {
         for(int i=0;i<l-1;i++)
         {
               a[i]=e/13;
               c=e-13*a[i];
               d=s[i+2]-'0';
               e=c*10+d;
         }
         for(int q=0;q<l-1;q++)
         {
                  if((q==0)&&(a[q]!=0))
                  my_printf("%d",a[q]);
                  else if(q!=0)
                  my_printf("%d",a[q]);
         }
        
         my_printf("\n");
         my_printf("%d\n",c);
     }
  
}

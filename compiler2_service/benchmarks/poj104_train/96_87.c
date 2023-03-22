#define NUM_ITER 1027790

#include <header.h>

int main_bench()
{
    int a,b,i,l,j,x=0,y=0;
    char n[100],s[100];
    my_scanf("%s",n);
    l=strlen(n);
    for(i=0;i<l;i++)
    {
                   x=y*10+n[i]-'0';
                   y=x%13;
                   s[i]=x/13+'0';
                   }
                   if(l==1)
                   {
                   my_printf("%d\n",0);
                   my_printf("%d",y);
                   }
                   else if(l==2)
                   {
                   if(s[1]==0)
                   {
                   my_printf("%d\n",0);
                   my_printf("%d",y);
                   }
                   else
                   my_printf("%c\n%d",s[1],y);
                   }
                   else
                   {
                   if(s[1]=='0')
                   {
                   for(i=2;i<l;i++)
                   {
                   my_printf("%c",s[i]);
                   }
                   my_printf("\n%d",y);
                   }
                   else
                   {
                       for(i=1;i<l;i++)
                       {
                       my_printf("%c",s[i]);
                       }
                       my_printf("\n%d",y);
                       }
                       }
                       getchar();
                       getchar();
                       }
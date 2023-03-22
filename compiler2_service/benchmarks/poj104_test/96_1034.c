#include <header.h>

int main_bench()
{
      int a[102]={0},b[102]={0};
      int n,i,t;
      char s[102]; 
      my_scanf("%s",s);
      n=strlen(s);
      for(i=0;i<=n-1;i++)
      a[i]=s[i]-'0';
      t=0;
      for(i=0;i<=n-1;i++)
      {
          b[i]=(10*t+a[i])/13;
          t=(10*t+a[i])%13;
      }
      if(b[0]==0&&b[1]==0&&b[2]==0)
      {
          if(n==1)
          my_printf("0\n%d",a[0]);
          else
          my_printf("0\n%d",10*a[0]+a[1]);
      }
      else
      {
      if(b[1]==0)
      {
          for(i=2;i<=n-1;i++)
          my_printf("%d",b[i]);
      }
      else
      {
          for(i=1;i<=n-1;i++)
          my_printf("%d",b[i]);
      }
      my_printf("\n%d",t);
      }
      }
      
      
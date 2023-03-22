#include <header.h>

main_bench()
{
      char a[100];
      int n,i,b[100];
      int e,f;
      my_scanf("%s",a);
      n=strlen(a);
      if(n>=3)
      {e=a[0]-'0';
      f=a[1]-'0';
      e=e*10+f;
      f=e/13;
      b[0]=f;
      e=e%13;   
      for(i=2;i<=n-1;i++)
      {
      f=a[i]-'0';
      e=e*10+f;
      f=e/13;
      b[i-1]=f;
      e=e%13;         
      }
      if(b[0]==0)
      {for(i=1;i<=n-2;i++)
      my_printf("%d",b[i]);
      my_printf("\n");
      my_printf("%d",e);}
      else
      {for(i=0;i<=n-2;i++)
      my_printf("%d",b[i]);
      my_printf("\n");
      my_printf("%d",e);}}
      else
      {if(n==1)
      {e=a[0]-'0';
      my_printf("0\n");
      my_printf("%d",e);}
      if(n==2)
      {e=a[0]-'0';
      f=a[1]-'0';
      e=e*10+f;
     if(e<=12)
     {my_printf("0\n");
     my_printf("%d",e);}
     else
     {f=e/13;
     e=e%13;
     my_printf("%d\n",f);
     my_printf("%d",e);  }
           }}

      


      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      }

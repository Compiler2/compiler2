#include <header.h>

main_bench()
{
      int i,j,k,n,m,l;
      char a[80],v[10];
      my_scanf("%d",&n);
      gets(v);
      for(i=0;i<n;i++)
      {
          j=0;
          gets(a);
        
          if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
          {
              l=strlen(a);
              for(j=0;j<l;j++)
              if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9'))
                 continue;
              else
              {
                  my_printf("0\n");
                  break;
              }
          }
          else
          my_printf("0\n");
          
          if(j==l)
          my_printf("1\n");
      }
      getchar();
      getchar();
}

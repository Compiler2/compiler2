#define NUM_ITER 256358

#include <header.h>

main_bench()
{
      char a[101];
      int i,k=0;
      gets(a);
      for(i=0;i<101;i++)
      {
                        if(a[i]==' '&&a[i+1]==' ')
                        a[i]='0';
      }
      for(i=0;i<101;i++)
      {
                        if(a[i]!='0'&&a[i]!=0)
                        my_printf("%c",a[i]);
                        else if(a[i]==0)
                        break;
      }
      getchar();
      getchar();
}

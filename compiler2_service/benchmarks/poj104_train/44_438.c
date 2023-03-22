#define NUM_ITER 324859

#include <header.h>

main_bench()
{
    for(int j=0;j<6;j++)
    {
            char a[10];
    my_scanf("%s",a);
    if(a[0]=='-')
    {
      int k=strlen(a),p=0;
      my_printf("-");
      for (int i=k-1;i>=1;i--)
      {
          if (a[i]!='0')
          {
             p++;
          }
          if(p!=0) my_printf("%c",a[i]); 
      } 
    }
    else
    {
      int k=strlen(a),p=0;
      for (int i=k-1;i>=0;i--)
      {
          if (a[i]!='0')
          {
             p++;
          }
          if(p!=0) my_printf("%c",a[i]); 
      }
    }
    my_printf("\n");
}
}

#define NUM_ITER 98515

#include <header.h>

main_bench()
{
      char a[100];
      int i,num,b[100];
      for(i=0;i<100;i++)
         b[i]=0;
      for(i=0;;i++)
      {
                   my_scanf("%c",&a[i]);
                   if(a[i]=='\n')
                   break;
      } 
      num=i;
      for(i=0;i<num-1;i++)
      {
            if((a[i]==' ')&&(a[i+1]==' '))
                b[i+1]=1;
      }
      for(i=0;i<num;i++)
      {
                        if(b[i]==0)
                        my_printf("%c",a[i]);
      }
}
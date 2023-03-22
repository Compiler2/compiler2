#define NUM_ITER 31518

#include <header.h>


main_bench()

{     int n,i,s=0,flg=0;
      char p[1000][50],l[1000];
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
         {my_scanf("%s",p[i]);
         l[i]=strlen(p[i]);}
      for (i=0;i<n;i++)
          {if (flg)                    
              if ((s+l[i]+1)<=80)
                 {my_printf(" %s",p[i]);
                 s=s+l[i]+1;}
              else 
               {
               my_printf("\n");
               my_printf("%s",p[i]);
               s=l[i];}
          else
                 {my_printf("%s",p[i]);
                 flg=1;
                 s=s+l[i];}
              
                       
                       }
      
     
}
#define NUM_ITER 396419

#include <header.h>

main_bench()
{int i,j,k,m,n,t;
 char a[50];char b[50];
 my_scanf("%s %s",a,b);
 for(i=0;;i++)
  {for(j=0;;j++)
    {if(a[i]==b[j])
       {t=j;m=i;n=j;
        for(m=i,n=j;;)
         {if(a[m]==b[n])
             {m++;n++;}
          if((m-i)==(strlen(a))) break;
         }
       }
      else continue;
      
      if((m-i)==(strlen(a))) break;
    
     }
     if((m-i)==(strlen(a))) break;
  }
  my_printf("%d",t);
} 

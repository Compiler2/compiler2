#define NUM_ITER 1026756

#include <header.h>

main_bench()
{
      char a[1000];
      gets(a);
      int i,p;
      i=0;
      while (a[i]!='\0')
      {
            if (a[i]>='a'&&a[i]<='z')
            {
                a[i]=a[i]+'A'-'a';
            }
            i++;
      }
      p=1;
      i=0;
      while (a[i+1]!='\0')
      {
            if (a[i]==a[i+1])
            {
                 p=p+1;
            }
            else 
            {
                 my_printf("(%c,%d)",a[i],p);
                 p=1;
            }
            if (a[i+2]=='\0')
            {
                 if (a[i]==a[i+1])
                 {
                 my_printf("(%c,%d)",a[i],p); 
                 }
                 else
                 {
                 my_printf("(%c,%d)",a[i+1],p);
                 }
            }
            i++;
      }  
      if (a[1]=='\0')
       {
                     if   (a[0]>='a'&&a[0]<='z')
                     {
                            a[0]=a[0]+'A'-'a';
                            my_printf("(%c,%d)",a[0],1);
                     }
                     else     
                     {
                            my_printf("(%c,%d)",a[0],1);
                     }
       }
      getchar();getchar();getchar();getchar();getchar();
      
}